// Mission01_RashDrivers.cpp
#include "Mission01_RashDrivers.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

AMission01_RashDrivers::AMission01_RashDrivers()
{
    MissionName = FText::FromString("Stop the Rash-Drivers");
    MissionDescription = FText::FromString("Drunk citizens are driving recklessly through New Bok City. Stop them before they hurt someone!");

    // Default settings
    CarInitialSpeed = 120.0f; // km/h
    CarSlowdownPerPole = 15.0f;
    CarStopThreshold = 20.0f;
    PolesRequiredToSlow = 5;
    WheelShotsRequiredToStop = 4;

    // Dialogue
    NedCallGreeting = FText::FromString("Peter! I've been tracking the GPS... something's up!");
    NedCallInstructions = FText::FromString("I hacked into the NYC... uh, New Bok City traffic system. There's a vehicle doing some serious rash driving on Laughlin Street!");
    NedCallEncouragement = FText::FromString("Nice! Keep going, you're slowing it down!");
    NedCallNotStopped = FText::FromString("Wait, no! You haven't stopped the car completely. Try shooting the wheels!");

    bPlayerAttachedToCar = false;
    bVehicleStopped = false;
    CurrentVehicleSpeed = 0.0f;
}

void AMission01_RashDrivers::BeginPlay()
{
    Super::BeginPlay();

    // Find SpiderMan character
    SpiderMan = Cast<ASpiderCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

    if (bAutoStartOnLevelLoad)
    {
        // Delay mission start by 2 seconds for level setup
        GetWorld()->GetTimerManager().SetTimer(NedCallTimerHandle, this, &AMission01_RashDrivers::StartMission, 2.0f, false);
    }
}

void AMission01_RashDrivers::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentState == EMissionState::InProgress)
    {
        // Check for mission failure conditions
        if (CheckMissionFailure())
        {
            FailMission();
        }

        // Update vehicle speed based on poles caught
        if (RashDriverVehicle && CurrentPhase == EMissionPhase::SlowVehicle)
        {
            CheckVehicleStop();
        }
    }
}

void AMission01_RashDrivers::InitializeVehicle()
{
    if (RashDriverVehicle)
    {
        CurrentVehicleSpeed = CarInitialSpeed;
        // Set vehicle to spawn location and start moving
        RashDriverVehicle->SetActorLocation(VehicleSpawnLocation);
        // TODO: Set vehicle AI to drive toward intersection
    }
}

void AMission01_RashDrivers::SpawnCyclist()
{
    if (CyclistPedestrian)
    {
        CyclistPedestrian->SetActorLocation(CyclistSpawnLocation);
        // TODO: Set cyclist to start crossing at green light
    }
}

void AMission01_RashDrivers::PlayNedPhoneCall()
{
    // TODO: Trigger phone call UI with subtitles
    // Play dialogue: Greeting -> Instructions
    // Show objective marker at PlayerArrivalMarker location

    SetMissionPhase(EMissionPhase::TravelToSite);
}

void AMission01_RashDrivers::PlayArrivalCutscene()
{
    // TODO: Trigger cutscene sequence
    // - Show drunk drivers approaching red light
    // - Show cyclist preparing to cross
    // - Camera focuses on danger

    SetMissionPhase(EMissionPhase::SlowVehicle);
    InitializeVehicle();
    SpawnCyclist();
}

void AMission01_RashDrivers::OnVehicleAttached()
{
    bPlayerAttachedToCar = true;

    // TODO: Highlight lamp poles with zip points
    // Enable pole detection for zip mechanic
}

void AMission01_RashDrivers::OnPoleZipped()
{
    OnPoleCaught();

    // Reduce vehicle speed
    CurrentVehicleSpeed = FMath::Max(CurrentVehicleSpeed - CarSlowdownPerPole, CarStopThreshold);

    if (PolesCaught >= PolesRequiredToSlow)
    {
        // TODO: Play Ned's encouragement dialogue
        // Transition to shoot wheels phase
        SetMissionPhase(EMissionPhase::StopVehicle);
    }
}

void AMission01_RashDrivers::OnWheelShot()
{
    OnWheelShotHit();

    // Further reduce vehicle speed per wheel hit
    CurrentVehicleSpeed = FMath::Max(CurrentVehicleSpeed - (CarStopThreshold * 0.5f), 0.0f);

    if (WheelShotsHit >= WheelShotsRequiredToStop)
    {
        bVehicleStopped = true;
        CurrentVehicleSpeed = 0.0f;

        if (RashDriverVehicle)
        {
            // TODO: Stop the vehicle completely
        }

        CompleteMission();
    }
}

void AMission01_RashDrivers::CheckVehicleStop()
{
    if (CurrentVehicleSpeed <= 0.0f && !bVehicleStopped)
    {
        bVehicleStopped = true;
        CompleteMission();
    }
}

void AMission01_RashDrivers::OnPlayerReachesLocation()
{
    if (CurrentPhase == EMissionPhase::TravelToSite)
    {
        // Check distance to arrival marker
        if (SpiderMan)
        {
            float Distance = FVector::Dist(SpiderMan->GetActorLocation(), PlayerArrivalMarker);
            if (Distance < 500.0f) // Within 5 meters
            {
                PlayArrivalCutscene();
            }
        }
    }
}

bool AMission01_RashDrivers::CheckMissionFailure()
{
    // Check if vehicle hit the cyclist
    if (RashDriverVehicle && CyclistPedestrian)
    {
        float Distance = FVector::Dist(RashDriverVehicle->GetActorLocation(), CyclistPedestrian->GetActorLocation());
        if (Distance < 200.0f && CurrentVehicleSpeed > 10.0f) // Collision threshold
        {
            return true;
        }
    }

    return false;
}

void AMission01_RashDrivers::OnPhaseChanged(EMissionPhase OldPhase, EMissionPhase NewPhase)
{
    Super::OnPhaseChanged(OldPhase, NewPhase);

    switch (NewPhase)
    {
    case EMissionPhase::NedCall:
        PlayNedPhoneCall();
        break;

    case EMissionPhase::TravelToSite:
        // Show waypoint to location
        break;

    case EMissionPhase::ArrivalScene:
        PlayArrivalCutscene();
        break;

    case EMissionPhase::SlowVehicle:
        // Enable pole zip mechanic tracking
        break;

    case EMissionPhase::StopVehicle:
        // Enable wheel shooting mechanic
        // TODO: Play Ned's "not stopped" dialogue
        break;

    case EMissionPhase::MissionComplete:
        // Show mission complete screen
        break;

    default:
        break;
    }
}