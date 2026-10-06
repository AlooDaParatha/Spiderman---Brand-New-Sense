// SpiderMission.h - Base mission class
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpiderMission.generated.h"

UENUM(BlueprintType)
enum class EMissionState : uint8
{
    NotStarted    UMETA(DisplayName = "Not Started"),
    InProgress    UMETA(DisplayName = "In Progress"),
    Completed     UMETA(DisplayName = "Completed"),
    Failed        UMETA(DisplayName = "Failed")
};

UENUM(BlueprintType)
enum class EMissionPhase : uint8
{
    None          UMETA(DisplayName = "None"),
    NedCall       UMETA(DisplayName = "Ned's Call"),
    TravelToSite  UMETA(DisplayName = "Travel to Site"),
    ArrivalScene  UMETA(DisplayName = "Arrival Cutscene"),
    SlowVehicle   UMETA(DisplayName = "Slow the Vehicle"),
    StopVehicle   UMETA(DisplayName = "Stop the Vehicle"),
    MissionComplete UMETA(DisplayName = "Mission Complete")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStateChanged, EMissionState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionPhaseChanged, EMissionPhase, NewPhase);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissionCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissionFailed);

UCLASS()
class SPIDERMAN_API ASpiderMission : public AActor
{
    GENERATED_BODY()

public:
    ASpiderMission();

protected:
    virtual void BeginPlay() override;

public:
    // Mission properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission")
    FText MissionName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission")
    FText MissionDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission")
    EMissionState CurrentState;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission")
    EMissionPhase CurrentPhase;

    // Mission objectives
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission|Objectives")
    bool bPrimaryObjectiveComplete;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission|Objectives")
    int32 PolesCaught;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission|Objectives")
    int32 WheelShotsHit;

    // Mission settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission|Settings")
    float TimeLimit;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission|Settings")
    bool bAutoStartOnLevelLoad;

    // Delegates
    UPROPERTY(BlueprintAssignable, Category = "Mission|Events")
    FOnMissionStateChanged OnMissionStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Mission|Events")
    FOnMissionPhaseChanged OnMissionPhaseChanged;

    UPROPERTY(BlueprintAssignable, Category = "Mission|Events")
    FOnMissionCompleted OnMissionCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Mission|Events")
    FOnMissionFailed OnMissionFailed;

public:
    UFUNCTION(BlueprintCallable, Category = "Mission")
    void StartMission();

    UFUNCTION(BlueprintCallable, Category = "Mission")
    void CompleteMission();

    UFUNCTION(BlueprintCallable, Category = "Mission")
    void FailMission();

    UFUNCTION(BlueprintCallable, Category = "Mission")
    void SetMissionPhase(EMissionPhase NewPhase);

    UFUNCTION(BlueprintCallable, Category = "Mission|Objectives")
    void OnPoleCaught();

    UFUNCTION(BlueprintCallable, Category = "Mission|Objectives")
    void OnWheelShotHit();

    UFUNCTION(BlueprintCallable, Category = "Mission")
    virtual void Tick(float DeltaTime) override;

protected:
    virtual void OnPhaseChanged(EMissionPhase OldPhase, EMissionPhase NewPhase);
    virtual void OnStateChanged(EMissionState OldState, EMissionState NewState);
};