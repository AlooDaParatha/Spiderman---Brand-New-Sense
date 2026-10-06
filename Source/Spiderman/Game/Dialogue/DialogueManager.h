// DialogueManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogueManager.generated.h"

class UDialogueWidget;

UENUM(BlueprintType)
enum class EDialogueType : uint8
{
	PhoneCall    UMETA(DisplayName = "Phone Call"),
	Subtitle     UMETA(DisplayName = "Subtitle"),
	RadioMessage UMETA(DisplayName = "Radio Message"),
	DirectSpeech UMETA(DisplayName = "Direct Speech")
};

USTRUCT(BlueprintType)
struct FDialogueLine
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText Speaker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	EDialogueType DialogueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	class USoundBase* VoiceClip;
};

USTRUCT(BlueprintType)
struct FDialogueSequence
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText SequenceTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	TArray<FDialogueLine> Lines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	float DelayBetweenLines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	bool bCanSkip;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogueStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogueEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogueLineShown, const FDialogueLine&, Line);

UCLASS()
class SPIDERMAN_API ADialogueManager : public AActor
{
	GENERATED_BODY()

public:
	ADialogueManager();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Dialogue sequences
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|Sequences")
	TMap<FName, FDialogueSequence> DialogueSequences;

	// UI widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|UI")
	TSubclassOf<UDialogueWidget> DialogueWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category = "Dialogue|UI")
	UDialogueWidget* DialogueWidget;

	// State
	UPROPERTY(BlueprintReadOnly, Category = "Dialogue|State")
	bool bIsPlayingDialogue;

	UPROPERTY(BlueprintReadOnly, Category = "Dialogue|State")
	FName CurrentSequenceName;

	UPROPERTY(BlueprintReadOnly, Category = "Dialogue|State")
	int32 CurrentLineIndex;

	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "Dialogue|Events")
	FOnDialogueStarted OnDialogueStarted;

	UPROPERTY(BlueprintAssignable, Category = "Dialogue|Events")
	FOnDialogueEnded OnDialogueEnded;

	UPROPERTY(BlueprintAssignable, Category = "Dialogue|Events")
	FOnDialogueLineShown OnDialogueLineShown;

public:
	// Dialogue playback
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void PlayDialogueSequence(FName SequenceName);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void StopDialogue();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void SkipCurrentLine();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void AddDialogueSequence(FName SequenceName, const FDialogueSequence& Sequence);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool HasDialogueSequence(FName SequenceName) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool IsDialoguePlaying() const { return bIsPlayingDialogue; }

	// Phone call specific
	UFUNCTION(BlueprintCallable, Category = "Dialogue|PhoneCall")
	void PlayPhoneCall(FName SequenceName);

	UFUNCTION(BlueprintCallable, Category = "Dialogue|PhoneCall")
	void EndPhoneCall();

protected:
	virtual void PlayNextLine();
	virtual void OnLineComplete();
	virtual void UpdateDialogue(float DeltaTime);

private:
	FTimerHandle DialogueLineTimerHandle;
	float CurrentLineElapsedTime;
};
