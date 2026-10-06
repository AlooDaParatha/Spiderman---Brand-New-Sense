// SpiderMission.cpp
#include "SpiderMission.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextRenderComponent.h"

ASpiderMission::ASpiderMission()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = false;

    MissionName = FText::GetEmpty();
    MissionDescription = FText::GetEmpty();
    CurrentState = EMissionState::NotStarted;
    CurrentPhase = EMissionPhase::None;

    bPrimaryObjectiveComplete = false;
    PolesCaught = 0;
    WheelShotsHit = 0;
    TimeLimit = 0.0f;
    bAutoStartOnLevelLoad = false;
}

void ASpiderMission::BeginPlay()
{
    Super::BeginPlay();

    if (bAutoStartOnLevelLoad)
    {
        StartMission();
    }
}

void ASpiderMission::StartMission()
{
    if (CurrentState != EMissionState::NotStarted)
    {
        return;
    }

    CurrentState = EMissionState::InProgress;
    SetMissionPhase(EMissionPhase::NedCall);

    OnStateChanged(EMissionState::NotStarted, EMissionState::InProgress);
    OnMissionStateChanged.Broadcast(CurrentState);
}

void ASpiderMission::CompleteMission()
{
    if (CurrentState != EMissionState::InProgress)
    {
        return;
    }

    CurrentState = EMissionState::Completed;
    SetMissionPhase(EMissionPhase::MissionComplete);

    OnStateChanged(EMissionState::InProgress, EMissionState::Completed);
    OnMissionCompleted.Broadcast();
    OnMissionStateChanged.Broadcast(CurrentState);
}

void ASpiderMission::FailMission()
{
    if (CurrentState != EMissionState::InProgress)
    {
        return;
    }

    CurrentState = EMissionState::Failed;
    SetMissionPhase(EMissionPhase::None);

    OnStateChanged(EMissionState::InProgress, EMissionState::Failed);
    OnMissionFailed.Broadcast();
    OnMissionStateChanged.Broadcast(CurrentState);
}

void ASpiderMission::SetMissionPhase(EMissionPhase NewPhase)
{
    if (CurrentPhase == NewPhase)
    {
        return;
    }

    EMissionPhase OldPhase = CurrentPhase;
    CurrentPhase = NewPhase;

    OnPhaseChanged(OldPhase, NewPhase);
    OnMissionPhaseChanged.Broadcast(NewPhase);
}

void ASpiderMission::OnPoleCaught()
{
    PolesCaught++;
    OnMissionPhaseChanged.Broadcast(EMissionPhase::SlowVehicle);
}

void ASpiderMission::OnWheelShotHit()
{
    WheelShotsHit++;
    if (WheelShotsHit >= 4)
    {
        CompleteMission();
    }
}

void ASpiderMission::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentState == EMissionState::InProgress && TimeLimit > 0.0f)
    {
        TimeLimit -= DeltaTime;
        if (TimeLimit <= 0.0f)
        {
            FailMission();
        }
    }
}

void ASpiderMission::OnPhaseChanged(EMissionPhase OldPhase, EMissionPhase NewPhase)
{
    // Override in subclasses
}

void ASpiderMission::OnStateChanged(EMissionState OldState, EMissionState NewState)
{
    // Override in subclasses
}