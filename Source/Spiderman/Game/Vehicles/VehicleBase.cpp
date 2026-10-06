// VehicleBase.cpp
#include "VehicleBase.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"

AVehicleBase::AVehicleBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// Root component
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetCollisionEnabled(ECC_WorldDynamic);
	CollisionBox->SetCollisionObjectType(ECC_Pawn);
	RootComponent = CollisionBox;

	// Mesh
	VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
	VehicleMesh->SetupAttachment(RootComponent);

	// Movement
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->MaxSpeed = 600.0f;

	// Default values
	MaxSpeed = 120.0f; // km/h equivalent
	CurrentSpeed = 0.0f;
	TargetSpeed = 0.0f;
	Acceleration = 20.0f;
	Deceleration = 15.0f;
	SpeedReductionPerWheel = 25.0f;
	StoppingDistance = 100.0f;
	VehicleState = EVehicleState::Idle;

	bCanBeAttachedTo = true;
	bHasAIControl = false;
	bIsBraking = false;
	SpeedModifier = 1.0f;
	AttachedCharacter = nullptr;
	SpiderManAttachSocket = FName(TEXT("SpiderManSocket"));

	MaxWheelHealth = 100;
	for (int32 i = 0; i < 4; ++i)
	{
		WheelHealth[i] = MaxWheelHealth;
		WheelSocketLocations[i] = FVector::ZeroVector;
	}
}

void AVehicleBase::BeginPlay()
{
	Super::BeginPlay();

	// Set wheel socket locations based on mesh bounds
	if (VehicleMesh)
	{
		FVector MeshCenter = VehicleMesh->GetBounds().GetBox().GetCenter();
		FVector MeshExtent = VehicleMesh->GetBounds().GetBox().GetExtent();

		// Front wheels
		WheelSocketLocations[0] = MeshCenter + FVector(MeshExtent.X * 0.8f, MeshExtent.Y * 0.9f, -MeshExtent.Z);
		WheelSocketLocations[1] = MeshCenter + FVector(MeshExtent.X * 0.8f, -MeshExtent.Y * 0.9f, -MeshExtent.Z);

		// Rear wheels
		WheelSocketLocations[2] = MeshCenter + FVector(-MeshExtent.X * 0.8f, MeshExtent.Y * 0.9f, -MeshExtent.Z);
		WheelSocketLocations[3] = MeshCenter + FVector(-MeshExtent.X * 0.8f, -MeshExtent.Y * 0.9f, -MeshExtent.Z);
	}
}

void AVehicleBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateSpeed(DeltaTime);
	ApplySpeedModifiers();
	UpdateMovement(DeltaTime);

	if (bHasAIControl)
	{
		UpdateAI(DeltaTime);
	}

	CheckWheelDamage();
}

void AVehicleBase::SetTargetSpeed(float NewSpeed)
{
	TargetSpeed = FMath::Clamp(NewSpeed, 0.0f, MaxSpeed);
}

void AVehicleBase::AddSpeedModifier(float Modifier)
{
	SpeedModifier = FMath::Max(0.0f, SpeedModifier + Modifier);
}

void AVehicleBase::ApplyBrakes(float BrakeForce)
{
	bIsBraking = true;
	TargetSpeed = 0.0f;
	CurrentSpeed = FMath::Max(0.0f, CurrentSpeed - BrakeForce);

	if (CurrentSpeed <= 0.0f)
	{
		StopVehicle();
	}
}

void AVehicleBase::AttachCharacter(ACharacter* Character)
{
	if (!bCanBeAttachedTo || !Character)
	{
		return;
	}

	AttachedCharacter = Character;

	// Attach character to vehicle mesh
	if (VehicleMesh)
	{
		Character->AttachToComponent(VehicleMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, SpiderManAttachSocket);
	}

	VehicleState = EVehicleState::Driving;
}

void AVehicleBase::DetachCharacter()
{
	if (AttachedCharacter)
	{
		AttachedCharacter->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		AttachedCharacter = nullptr;
	}
}

void AVehicleBase::DamageWheel(EWheelType Wheel, int32 Damage)
{
	int32 WheelIndex = static_cast<int32>(Wheel);
	WheelHealth[WheelIndex] = FMath::Max(0, WheelHealth[WheelIndex] - Damage);

	OnWheelDamaged.Broadcast(Wheel, WheelHealth[WheelIndex]);

	// Reduce speed for each damaged wheel
	if (WheelHealth[WheelIndex] <= 0)
	{
		AddSpeedModifier(-SpeedReductionPerWheel);
	}
}

void AVehicleBase::ResetWheelHealth()
{
	for (int32 i = 0; i < 4; ++i)
	{
		WheelHealth[i] = MaxWheelHealth;
	}
}

int32 AVehicleBase::GetWheelHealth(EWheelType Wheel) const
{
	return WheelHealth[static_cast<int32>(Wheel)];
}

FVector AVehicleBase::GetWheelLocation(EWheelType Wheel) const
{
	return GetActorLocation() + GetActorRotation().RotateVector(WheelSocketLocations[static_cast<int32>(Wheel)]);
}

void AVehicleBase::StartAIDriving(FVector InTargetLocation)
{
	bHasAIControl = true;
	TargetLocation = InTargetLocation;
	VehicleState = EVehicleState::Driving;
	TargetSpeed = MaxSpeed;
}

void AVehicleBase::StopAIDriving()
{
	bHasAIControl = false;
	TargetSpeed = 0.0f;
}

void AVehicleBase::SetVehicleState(EVehicleState NewState)
{
	VehicleState = NewState;
}

void AVehicleBase::StopVehicle()
{
	CurrentSpeed = 0.0f;
	TargetSpeed = 0.0f;
	VehicleState = EVehicleState::Stopped;
	bIsBraking = false;
	OnVehicleStopped.Broadcast();
}

void AVehicleBase::UpdateSpeed(float DeltaTime)
{
	if (bIsBraking)
	{
		CurrentSpeed = FMath::FInterpTo(CurrentSpeed, 0.0f, DeltaTime, 5.0f);
		if (CurrentSpeed < 0.1f)
		{
			CurrentSpeed = 0.0f;
		}
		return;
	}

	float EffectiveTarget = TargetSpeed * SpeedModifier;

	if (CurrentSpeed < EffectiveTarget)
	{
		CurrentSpeed = FMath::FInterpTo(CurrentSpeed, EffectiveTarget, DeltaTime, Acceleration);
	}
	else if (CurrentSpeed > EffectiveTarget)
	{
		CurrentSpeed = FMath::FInterpTo(CurrentSpeed, EffectiveTarget, DeltaTime, Deceleration);
	}

	OnSpeedChanged.Broadcast(CurrentSpeed);
}

void AVehicleBase::UpdateMovement(float DeltaTime)
{
	if (CurrentSpeed > 0.0f && VehicleState != EVehicleState::Stopped)
	{
		FVector ForwardDirection = GetActorForwardVector();
		FVector NewLocation = GetActorLocation() + (ForwardDirection * CurrentSpeed * DeltaTime);
		SetActorLocation(NewLocation);
	}
}

void AVehicleBase::UpdateAI(float DeltaTime)
{
	if (!bHasAIControl)
	{
		return;
	}

	FVector DirectionToTarget = (TargetLocation - GetActorLocation()).GetSafeNormal();
	FVector CurrentForward = GetActorForwardVector();

	// Smooth steering toward target
	FVector NewForward = FMath::Lerp(CurrentForward, DirectionToTarget, 0.05f);
	FRotator NewRotation = NewForward.Rotation();
	SetActorRotation(NewRotation);

	// Stop when close to target
	float DistanceToTarget = FVector::Dist(GetActorLocation(), TargetLocation);
	if (DistanceToTarget < StoppingDistance)
	{
		TargetSpeed = 0.0f;
	}
}

void AVehicleBase::ApplySpeedModifiers()
{
	// Speed is reduced by wheel damage through SpeedModifier
	// Additional modifiers can be applied by AddSpeedModifier()
}

void AVehicleBase::CheckWheelDamage()
{
	// Check if all wheels are destroyed
	int32 DestroyedWheels = 0;
	for (int32 i = 0; i < 4; ++i)
	{
		if (WheelHealth[i] <= 0)
		{
			DestroyedWheels++;
		}
	}

	// If all wheels destroyed, force stop
	if (DestroyedWheels >= 4)
	{
		StopVehicle();
	}
}