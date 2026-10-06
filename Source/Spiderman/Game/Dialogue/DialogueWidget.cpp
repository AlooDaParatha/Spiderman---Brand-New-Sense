// DialogueWidget.cpp
#include "DialogueWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Kismet/KismetMathLibrary.h"

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Initialize UI components if not bound via UMG
	if (!SpeakerNameText)
	{
		SpeakerNameText = NewObject<UTextBlock>(this);
	}

	if (!DialogueText)
	{
		DialogueText = NewObject<UTextBlock>(this);
	}

	if (!BackgroundImage)
	{
		BackgroundImage = NewObject<UImage>(this);
	}

	SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UDialogueWidget::ShowDialogue(const FDialogueLine& Line)
{
	CurrentLine = Line;

	if (SpeakerNameText)
	{
		SpeakerNameText->SetText(Line.Speaker);
	}

	if (DialogueText)
	{
		DialogueText->SetText(Line.Text);
		if (bAutoWrap)
		{
			DialogueText->SetAutoWrapText(true);
		}
	}

	UpdateDialogueStyle(Line.DialogueType);

	SetVisibility(ESlateVisibility::Visible);
}

void UDialogueWidget::HideDialogue()
{
	SetVisibility(ESlateVisibility::Hidden);

	if (DialogueText)
	{
		DialogueText->SetText(FText::GetEmpty());
	}

	if (SpeakerNameText)
	{
		SpeakerNameText->SetText(FText::GetEmpty());
	}
}

void UDialogueWidget::ShowPhoneCallUI()
{
	// Show phone call specific UI (phone icon, Ned's avatar, etc.)
	SetVisibility(ESlateVisibility::Visible);

	if (BackgroundImage)
	{
		BackgroundImage->SetColorAndOpacity(PhoneCallBackgroundColor);
	}
}

void UDialogueWidget::HidePhoneCallUI()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueWidget::UpdateDialogueStyle(EDialogueType DialogueType)
{
	switch (DialogueType)
	{
	case EDialogueType::PhoneCall:
		ShowPhoneCallUI();
		if (BackgroundImage)
		{
			BackgroundImage->SetColorAndOpacity(PhoneCallBackgroundColor);
		}
		break;

	case EDialogueType::Subtitle:
		if (BackgroundImage)
		{
			BackgroundImage->SetColorAndOpacity(SubtitleBackgroundColor);
		}
		break;

	case EDialogueType::RadioMessage:
		// TODO: Radio style UI
		break;

	case EDialogueType::DirectSpeech:
		// TODO: Direct speech bubble style
		break;

	default:
		break;
	}
}