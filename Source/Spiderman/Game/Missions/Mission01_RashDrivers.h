// Mission01_RashDrivers.h
#pragma once

#include "CoreMinimal.h"
#include "Game/Missions/SpiderMission.h"
#include "Mission01_RashDrivers.generated.h"

class ASpiderCharacter;
class AVehicleBase;
class APedestrianNPC;

UCLASS()
class SPIDERMAN_API AMission01_RashDrivers : public ASpiderMission
{
    GENERATED_BODY()

public:
    AMission01_RashDrivers();

protected:
    virtual void BeginPlay() override;

public:
    // Mission-specific actors
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Setup")
    AVehicleBase* RashDriverVehicle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Setup")
    APedestrianNPC* CyclistPedestrian;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Setup")
    ASpiderCharacter* SpiderMan;

    // Locations
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Locations")
    FVector VehicleSpawnLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Locations")
    FVector PlayerArrivalMarker;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Locations")
    FVector CyclistSpawnLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Locations")
    FVector IntersectionCenter;

    // Mission settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Settings")
    float CarInitialSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Settings")
    float CarSlowdownPerPole;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Settings")
    float CarStopThreshold;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Settings")
    int32 PolesRequiredToSlow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Settings")
    int32 WheelShotsRequiredToStop;

    // Dialogue
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Dialogue")
    FText NedCallGreeting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Dialogue")
    FText NedCallInstructions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Dialogue")
    FText NedCallEncouragement;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission01|Dialogue")
    FText NedCallNotStopped;

public:
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void InitializeVehicle();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void SpawnCyclist();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void PlayNedPhoneCall();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void PlayArrivalCutscene();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void OnVehicleAttached();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void OnPoleZipped();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void OnWheelShot();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void CheckVehicleStop();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    void OnPlayerReachesLocation();

    UFUNCTION(BlueprintCallable, Category = "Mission01")
    bool CheckMissionFailure();

protected:
    virtual void OnPhaseChanged(EMissionPhase OldPhase, EMissionPhase NewPhase) override;

private:
    FTimerHandle NedCallTimerHandle;
    FTimerHandle CutsceneStartTimerHandle;
    bool bPlayerAttachedToCar;
    bool bVehicleStopped;
    float CurrentVehicleSpeed;
};