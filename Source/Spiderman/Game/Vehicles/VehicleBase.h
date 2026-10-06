// VehicleBase.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "VehicleBase.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class UFloatingPawnMovement;

UENUM(BlueprintType)
enum class EVehicleState : uint8
{
	Idle         UMETA(DisplayName = "Idle"),
	Driving      UMETA(DisplayName = "Driving"),
	Damaged      UMETA(DisplayName = "Damaged"),
	Stopped      UMETA(DisplayName = "Stopped")
};

UENUM(BlueprintType)
enum class EWheelType : uint8
{
	FrontLeft   UMETA(DisplayName = "Front Left"),
	FrontRight  UMETA(DisplayName = "Front Right"),
	RearLeft    UMETA(DisplayName = "Rear Left"),
	RearRight   UMETA(DisplayName = "Rear Right")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWheelDamaged, EWheelType, Wheel, int32, DamageLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVehicleStopped);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpeedChanged, float, NewSpeed);

UCLASS()
class SPIDERMAN_API AVehicleBase : public APawn
{
	GENERATED_BODY()

public:
	AVehicleBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle|Components")
	UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle|Components")
	USkeletalMeshComponent* VehicleMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle|Components")
	UFloatingPawnMovement* Movement;

	// Vehicle properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Properties")
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Properties")
	float CurrentSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Properties")
	float Acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Properties")
	float Deceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Properties")
	EVehicleState VehicleState;

	// Attachment system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Attachment")
	FName SpiderManAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Attachment")
	class ACharacter* AttachedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Attachment")
	bool bCanBeAttachedTo;

	// Wheel system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Wheels")
	int32 WheelHealth[4]; // Front-Left, Front-Right, Rear-Left, Rear-Right

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Wheels")
	int32 MaxWheelHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Wheels")
	float SpeedReductionPerWheel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|Wheels")
	FVector WheelSocketLocations[4];

	// AI system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|AI")
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|AI")
	bool bHasAIControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle|AI")
	float StoppingDistance;

	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "Vehicle|Events")
	FOnWheelDamaged OnWheelDamaged;

	UPROPERTY(BlueprintAssignable, Category = "Vehicle|Events")
	FOnVehicleStopped OnVehicleStopped;

	UPROPERTY(BlueprintAssignable, Category = "Vehicle|Events")
	FOnSpeedChanged OnSpeedChanged;

public:
	// Speed control
	UFUNCTION(BlueprintCallable, Category = "Vehicle|Speed")
	void SetTargetSpeed(float NewSpeed);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Speed")
	void AddSpeedModifier(float Modifier);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Speed")
	void ApplyBrakes(float BrakeForce);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Speed")
	float GetCurrentSpeed() const { return CurrentSpeed; }

	// Attachment system
	UFUNCTION(BlueprintCallable, Category = "Vehicle|Attachment")
	void AttachCharacter(ACharacter* Character);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Attachment")
	void DetachCharacter();

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Attachment")
	ACharacter* GetAttachedCharacter() const { return AttachedCharacter; }

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Attachment")
	bool HasAttachedCharacter() const { return AttachedCharacter != nullptr; }

	// Wheel damage system
	UFUNCTION(BlueprintCallable, Category = "Vehicle|Wheels")
	void DamageWheel(EWheelType Wheel, int32 Damage);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Wheels")
	void ResetWheelHealth();

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Wheels")
	int32 GetWheelHealth(EWheelType Wheel) const;

	UFUNCTION(BlueprintCallable, Category = "Vehicle|Wheels")
	FVector GetWheelLocation(EWheelType Wheel) const;

	// AI control
	UFUNCTION(BlueprintCallable, Category = "Vehicle|AI")
	void StartAIDriving(FVector InTargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|AI")
	void StopAIDriving();

	// State management
	UFUNCTION(BlueprintCallable, Category = "Vehicle|State")
	void SetVehicleState(EVehicleState NewState);

	UFUNCTION(BlueprintCallable, Category = "Vehicle|State")
	EVehicleState GetVehicleState() const { return VehicleState; }

	UFUNCTION(BlueprintCallable, Category = "Vehicle|State")
	void StopVehicle();

protected:
	virtual void UpdateMovement(float DeltaTime);
	virtual void UpdateAI(float DeltaTime);
	virtual void UpdateSpeed(float DeltaTime);
	virtual void CheckWheelDamage();
	virtual void ApplySpeedModifiers();

private:
	float TargetSpeed;
	float SpeedModifier;
	bool bIsBraking;
};