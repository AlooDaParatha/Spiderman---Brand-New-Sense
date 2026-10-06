// SimpleMissionData.h - Simplified structures for blueprints
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SimpleMissionData.generated.h"

UENUM(BlueprintType)
enum class EMissionPhaseSimple : uint8
{
	NedCall       UMETA(DisplayName = "Ned's Call"),
	TravelToSite  UMETA(DisplayName = "Travel to Site"),
	ArrivalScene  UMETA(DisplayName = "Arrival Cutscene"),
	SlowVehicle   UMETA(DisplayName = "Slow the Vehicle"),
	StopVehicle   UMETA(DisplayName = "Stop the Vehicle"),
	Complete      UMETA(DisplayName = "Mission Complete")
};

USTRUCT(BlueprintType)
struct FMissionObjective : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ObjectiveText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetProgress;
};

USTRUCT(BlueprintType)
struct FMissionPhaseData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMissionPhaseSimple Phase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PhaseName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PhaseDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PhaseDuration;
};
