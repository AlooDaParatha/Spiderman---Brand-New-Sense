// PedestrianNPC.cpp
#include "PedestrianNPC.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"

APedestrianNPC::APedestrianNPC()
{
	PrimaryActorTick.bCanEverTick = true;

	// Character setup
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Default values
	CurrentState = EPedestrianState::Idle;
	bAlive = true;
	bIsAwareness = true;
	WalkSpeed = 600.0f;
	RunSpeed = 1200.0f;
	StoppingDistance = 50.0f;
	DangerDetectionRange = 3000.0f;
	ReactionTime = 0.5f;
	CrossingStartDelay = 0.0f;
	bCanCross = false;
	bHasStartedCrossing = false;
	bWasHit = false;
	CurrentReactionTime = 0.0f;
}

void APedestrianNPC::BeginPlay()
{
	Super::BeginPlay();
}

void APedestrianNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bAlive)
	{
		return;
	}

	UpdateMovement(DeltaTime);
	UpdateCrossing(DeltaTime);
	UpdateAwareness(DeltaTime);
}

void APedestrianNPC::SetPedestrianState(EPedestrianState NewState)
{
	CurrentState = NewState;

	switch (NewState)
	{
	case EPedestrianState::Walking:
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		break;

	case EPedestrianState::Running:
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		break;

	case EPedestrianState::Idle:
		GetCharacterMovement()->MaxWalkSpeed = 0.0f;
		StopMovement();
		break;

	case EPedestrianState::Hit:
		PlayHitAnimation();
		break;

	case EPedestrianState::Dead:
		PlayDeadAnimation();
		break;

	default:
		break;
	}
}

void APedestrianNPC::MoveToPedestrian(FVector Destination, bool bRun)
{
	TargetLocation = Destination;
	SetPedestrianState(bRun ? EPedestrianState::Running : EPedestrianState::Walking);
}

void APedestrianNPC::StopMovement()
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->StopMovementImmediately();
	}
	SetPedestrianState(EPedestrianState::Idle);
}

void APedestrianNPC::StartCrossing(FVector Start, FVector End, float Delay)
{
	CrossingStartLocation = Start;
	CrossingEndLocation = End;
	CrossingStartDelay = Delay;
	bHasStartedCrossing = false;
	bCanCross = true;

	if (Delay > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(
			CrossingDelayHandle,
			this,
			&APedestrianNPC::MoveToPedestrian,
			Delay,
			false,
			End
		);
	}
	else
	{
		MoveToPedestrian(End, false);
		SetPedestrianState(EPedestrianState::Crossing);
		bHasStartedCrossing = true;
	}
}

void APedestrianNPC::StopCrossing()
{
	bCanCross = false;
	bHasStartedCrossing = false;
	if (GetWorld()->GetTimerManager().IsTimerActive(CrossingDelayHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(CrossingDelayHandle);
	}
	StopMovement();
}

void APedestrianNPC::SetAwareness(bool bNewAwareness)
{
	bIsAwareness = bNewAwareness;
}

bool APedestrianNPC::DetectDanger(AActor* DangerSource)
{
	if (!bIsAwareness || !DangerSource)
	{
		return false;
	}

	float Distance = FVector::Dist(GetActorLocation(), DangerSource->GetActorLocation());
	return Distance < DangerDetectionRange;
}

void APedestrianNPC::React(AActor* Threat)
{
	if (!bIsAwareness || !bHasStartedCrossing)
	{
		return;
	}

	// If currently crossing and danger detected, try to run to safety
	if (CurrentState == EPedestrianState::Crossing)
	{
		// Move away from threat
		FVector AwayDirection = (GetActorLocation() - Threat->GetActorLocation()).GetSafeNormal();
		FVector SafeLocation = GetActorLocation() + (AwayDirection * 500.0f);
		MoveToPedestrian(SafeLocation, true); // Run
	}
}

void APedestrianNPC::TakeHit(AActor* DamageSource, float Damage)
{
	if (!bAlive)
	{
		return;
	}

	bWasHit = true;
	SetPedestrianState(EPedestrianState::Hit);
	OnPedestrianHit.Broadcast();

	// Die after hit
	GetWorld()->GetTimerManager().SetTimer(
		ReactionHandle,
		this,
		&APedestrianNPC::Die,
		0.5f,
		false,
		DamageSource
	);
}

void APedestrianNPC::Die(AActor* DamageSource)
{
	bAlive = false;
	SetPedestrianState(EPedestrianState::Dead);
	GetCharacterMovement()->DisableMovement();
	OnPedestrianDead.Broadcast();
}

void APedestrianNPC::UpdateMovement(float DeltaTime)
{
	if (CurrentState == EPedestrianState::Idle || !bAlive)
	{
		return;
	}

	FVector DirectionToTarget = (TargetLocation - GetActorLocation()).GetSafeNormal();
	float DistanceToTarget = FVector::Dist(GetActorLocation(), TargetLocation);

	if (DistanceToTarget > StoppingDistance)
	{
		GetCharacterMovement()->AddInputVector(DirectionToTarget, false);
	}
	else
	{
		if (CurrentState == EPedestrianState::Crossing)
		{
			OnPedestrianCrossingComplete.Broadcast();
			SetPedestrianState(EPedestrianState::Idle);
		}
		else
		{
			StopMovement();
		}
	}
}

void APedestrianNPC::UpdateCrossing(float DeltaTime)
{
	if (!bHasStartedCrossing || CurrentState != EPedestrianState::Crossing)
	{
		return;
	}

	// Check if crossing is complete
	float DistanceToEnd = FVector::Dist(GetActorLocation(), CrossingEndLocation);
	if (DistanceToEnd < StoppingDistance)
	{
		bHasStartedCrossing = false;
		OnPedestrianCrossingComplete.Broadcast();
		SetPedestrianState(EPedestrianState::Idle);
	}
}

void APedestrianNPC::UpdateAwareness(float DeltaTime)
{
	if (CurrentReactionTime > 0.0f)
	{
		CurrentReactionTime -= DeltaTime;
	}
}

void APedestrianNPC::PlayHitAnimation()
{
	// TODO: Play hit animation montage
	// GetMesh()->GetAnimInstance()->Montage_Play(HitMontage);
}

void APedestrianNPC::PlayDeadAnimation()
{
	// TODO: Play death animation montage
	// GetMesh()->GetAnimInstance()->Montage_Play(DeadMontage);
}