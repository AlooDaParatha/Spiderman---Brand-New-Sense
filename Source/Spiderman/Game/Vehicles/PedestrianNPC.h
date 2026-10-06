// PedestrianNPC.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PedestrianNPC.generated.h"

class UBoxComponent;

UENUM(BlueprintType)
enum class EPedestrianState : uint8
{
	Idle        UMETA(DisplayName = "Idle"),
	Walking     UMETA(DisplayName = "Walking"),
	Crossing    UMETA(DisplayName = "Crossing"),
	Running     UMETA(DisplayName = "Running"),
	Hit         UMETA(DisplayName = "Hit"),
	Dead        UMETA(DisplayName = "Dead")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPedestrianHit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPedestrianDead);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPedestrianCrossingComplete);

UCLASS()
class SPIDERMAN_API APedestrianNPC : public ACharacter
{
	GENERATED_BODY()

public:
	APedestrianNPC();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Pedestrian state
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|State")
	EPedestrianState CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|State")
	bool bAlive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|State")
	bool bIsAwareness;

	// Movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Movement")
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Movement")
	float RunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Movement")
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Movement")
	float StoppingDistance;

	// Crossing behavior
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Crossing")
	bool bCanCross;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Crossing")
	float CrossingStartDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Crossing")
	bool bHasStartedCrossing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Crossing")
	FVector CrossingStartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Crossing")
	FVector CrossingEndLocation;

	// Awareness system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Awareness")
	float DangerDetectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pedestrian|Awareness")
	float ReactionTime;

	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "Pedestrian|Events")
	FOnPedestrianHit OnPedestrianHit;

	UPROPERTY(BlueprintAssignable, Category = "Pedestrian|Events")
	FOnPedestrianDead OnPedestrianDead;

	UPROPERTY(BlueprintAssignable, Category = "Pedestrian|Events")
	FOnPedestrianCrossingComplete OnPedestrianCrossingComplete;

public:
	// State management
	UFUNCTION(BlueprintCallable, Category = "Pedestrian|State")
	void SetPedestrianState(EPedestrianState NewState);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|State")
	EPedestrianState GetPedestrianState() const { return CurrentState; }

	// Movement
	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Movement")
	void MoveToPedestrian(FVector Destination, bool bRun = false);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Movement")
	void StopMovement();

	// Crossing behavior
	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Crossing")
	void StartCrossing(FVector Start, FVector End, float Delay = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Crossing")
	void StopCrossing();

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Crossing")
	bool IsCurrentlyCrossing() const { return CurrentState == EPedestrianState::Crossing; }

	// Awareness & Danger
	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Awareness")
	void SetAwareness(bool bNewAwareness);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Awareness")
	bool DetectDanger(AActor* DangerSource);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Awareness")
	void React(AActor* Threat);

	// Collision/Damage
	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Damage")
	void TakeHit(AActor* DamageSource, float Damage);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Damage")
	void Die(AActor* DamageSource);

	UFUNCTION(BlueprintCallable, Category = "Pedestrian|Damage")
	bool IsAlive() const { return bAlive; }

protected:
	virtual void UpdateMovement(float DeltaTime);
	virtual void UpdateCrossing(float DeltaTime);
	virtual void UpdateAwareness(float DeltaTime);
	virtual void PlayHitAnimation();
	virtual void PlayDeadAnimation();

private:
	FTimerHandle CrossingDelayHandle;
	FTimerHandle ReactionHandle;
	float CurrentReactionTime;
	bool bWasHit;
};
