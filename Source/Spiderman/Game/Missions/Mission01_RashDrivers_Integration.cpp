// Mission01_RashDrivers_Integration.cpp
// Added integration code to Mission01_RashDrivers.cpp
#include "Mission01_RashDrivers.h"
#include "Game/Vehicles/VehicleBase.h"
#include "Game/Vehicles/PedestrianNPC.h"
#include "Game/Dialogue/DialogueManager.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/World.h"

void AMission01_RashDrivers::BeginPlay()
{
	Super::BeginPlay();

	// Find or spawn dialogue manager
	TArray<AActor*> DialogueActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADialogueManager::StaticClass(), DialogueActors);

	ADialogueManager* DialogueManager = nullptr;
	if (DialogueActors.Num() > 0)
	{
		DialogueManager = Cast<ADialogueManager>(DialogueActors[0]);
	}
	else
	{
		DialogueManager = GetWorld()->SpawnActor<ADialogueManager>();
	}

	// Setup Ned's dialogue sequences
	if (DialogueManager)
	{
		FDialogueSequence NedCallSequence;
		NedCallSequence.SequenceTitle = FText::FromString("Ned's Emergency Call");
		NedCallSequence.DelayBetweenLines = 1.0f;
		NedCallSequence.bCanSkip = false;

		// Line 1: Greeting
		FDialogueLine Line1;
		Line1.Speaker = FText::FromString("Ned");
		Line1.Text = NedCallGreeting;
		Line1.Duration = 3.0f;
		Line1.DialogueType = EDialogueType::PhoneCall;
		NedCallSequence.Lines.Add(Line1);

		// Line 2: Instructions
		FDialogueLine Line2;
		Line2.Speaker = FText::FromString("Ned");
		Line2.Text = NedCallInstructions;
		Line2.Duration = 4.0f;
		Line2.DialogueType = EDialogueType::PhoneCall;
		NedCallSequence.Lines.Add(Line2);

		DialogueManager->AddDialogueSequence(FName("NedCallMission01"), NedCallSequence);
	}

	// Find SpiderMan character
	SpiderMan = Cast<ASpiderCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (bAutoStartOnLevelLoad)
	{
		// Delay mission start by 2 seconds for level setup
		GetWorld()->GetTimerManager().SetTimer(NedCallTimerHandle, this, &AMission01_RashDrivers::StartMission, 2.0f, false);
	}
}

void AMission01_RashDrivers::PlayNedPhoneCall()
{
	// Find dialogue manager
	TArray<AActor*> DialogueActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADialogueManager::StaticClass(), DialogueActors);

	if (DialogueActors.Num() > 0)
	{
		ADialogueManager* DialogueManager = Cast<ADialogueManager>(DialogueActors[0]);
		if (DialogueManager)
		{
			DialogueManager->PlayPhoneCall(FName("NedCallMission01"));

			// Transition to travel phase after dialogue
			GetWorld()->GetTimerManager().SetTimer(
				CutsceneStartTimerHandle,
				[this]() { SetMissionPhase(EMissionPhase::TravelToSite); },
				8.0f,
				false
			);
		}
	}
}

void AMission01_RashDrivers::OnPoleCaught()
{
	Super::OnPoleCaught();

	// Reduce vehicle speed
	CurrentVehicleSpeed = FMath::Max(CurrentVehicleSpeed - CarSlowdownPerPole, CarStopThreshold);

	if (RashDriverVehicle)
	{
		RashDriverVehicle->AddSpeedModifier(-0.2f); // 20% speed reduction
	}

	if (PolesCaught >= PolesRequiredToSlow)
	{
		// Play Ned's encouragement
		TArray<AActor*> DialogueActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADialogueManager::StaticClass(), DialogueActors);

		if (DialogueActors.Num() > 0)
		{
			ADialogueManager* DialogueManager = Cast<ADialogueManager>(DialogueActors[0]);
			if (DialogueManager)
			{
				FDialogueSequence EncouragementSequence;
				EncouragementSequence.SequenceTitle = FText::FromString("Ned Encouragement");
				EncouragementSequence.DelayBetweenLines = 0.5f;
				EncouragementSequence.bCanSkip = true;

				FDialogueLine EncLine;
				EncLine.Speaker = FText::FromString("Ned");
				EncLine.Text = NedCallEncouragement;
				EncLine.Duration = 2.0f;
				EncLine.DialogueType = EDialogueType::PhoneCall;
				EncouragementSequence.Lines.Add(EncLine);

				DialogueManager->AddDialogueSequence(FName("NedEncouragement"), EncouragementSequence);
				DialogueManager->PlayPhoneCall(FName("NedEncouragement"));
			}
		}

		SetMissionPhase(EMissionPhase::StopVehicle);
	}
}

void AMission01_RashDrivers::OnWheelShot()
{
	Super::OnWheelShot();

	if (RashDriverVehicle)
	{
		// Each wheel shot reduces speed significantly
		RashDriverVehicle->AddSpeedModifier(-0.3f); // 30% speed reduction per wheel
	}

	if (WheelShotsHit >= WheelShotsRequiredToStop)
	{
		bVehicleStopped = true;
		CurrentVehicleSpeed = 0.0f;

		if (RashDriverVehicle)
		{
			RashDriverVehicle->StopVehicle();
		}

		CompleteMission();
	}
}

void AMission01_RashDrivers::CheckVehicleStop()
{
	if (CurrentVehicleSpeed <= 0.0f && !bVehicleStopped)
	{
		bVehicleStopped = true;

		if (RashDriverVehicle)
		{
			RashDriverVehicle->StopVehicle();
		}

		CompleteMission();
	}
}

bool AMission01_RashDrivers::CheckMissionFailure()
{
	// Check if vehicle hit the cyclist
	if (RashDriverVehicle && CyclistPedestrian)
	{
		float Distance = FVector::Dist(RashDriverVehicle->GetActorLocation(), CyclistPedestrian->GetActorLocation());

		// Collision threshold: 200cm
		if (Distance < 200.0f && CurrentVehicleSpeed > 10.0f)
		{
			// Vehicle hit the cyclist
			CyclistPedestrian->Die(RashDriverVehicle);

			// Play Ned's reaction
			TArray<AActor*> DialogueActors;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADialogueManager::StaticClass(), DialogueActors);

			if (DialogueActors.Num() > 0)
			{
				ADialogueManager* DialogueManager = Cast<ADialogueManager>(DialogueActors[0]);
				if (DialogueManager)
				{
					FDialogueSequence FailSequence;
					FailSequence.SequenceTitle = FText::FromString("Mission Failed");
					FailSequence.DelayBetweenLines = 0.5f;
					FailSequence.bCanSkip = false;

					FDialogueLine FailLine;
					FailLine.Speaker = FText::FromString("Ned");
					FailLine.Text = FText::FromString("No! We were too late!");
					FailLine.Duration = 3.0f;
					FailLine.DialogueType = EDialogueType::PhoneCall;
					FailSequence.Lines.Add(FailLine);

					DialogueManager->AddDialogueSequence(FName("MissionFailed"), FailSequence);
					DialogueManager->PlayPhoneCall(FName("MissionFailed"));
				}
			}

			return true;
		}
	}

	return false;
}