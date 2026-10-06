// DialogueWidget.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Game/Dialogue/DialogueManager.h"
#include "DialogueWidget.generated.h"

UCLASS()
class SPIDERMAN_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	// UI Components
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* SpeakerNameText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* DialogueText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BackgroundImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* SpeakerImage;

	// Styling
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|Style")
	FLinearColor PhoneCallBackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|Style")
	FLinearColor SubtitleBackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|Style")
	float DialogueDisplayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue|Style")
	bool bAutoWrap;

public:
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void ShowDialogue(const FDialogueLine& Line);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void HideDialogue();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void ShowPhoneCallUI();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void HidePhoneCallUI();

protected:
	virtual void UpdateDialogueStyle(EDialogueType DialogueType);

private:
	FDialogueLine CurrentLine;
};