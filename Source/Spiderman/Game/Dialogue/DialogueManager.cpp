// DialogueManager.cpp
#include "DialogueManager.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

ADialogueManager::ADialogueManager()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsPlayingDialogue = false;
	CurrentSequenceName = NAME_None;
	CurrentLineIndex = 0;
	CurrentLineElapsedTime = 0.0f;
}

void ADialogueManager::BeginPlay()
{
	Super::BeginPlay();

	// Create dialogue widget if class is set
	if (DialogueWidgetClass)
	{
		DialogueWidget = CreateWidget<UDialogueWidget>(GetWorld(), DialogueWidgetClass);
		if (DialogueWidget)
		{
			DialogueWidget->AddToViewport(100);
			DialogueWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void ADialogueManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPlayingDialogue)
	{
		UpdateDialogue(DeltaTime);
	}
}

void ADialogueManager::PlayDialogueSequence(FName SequenceName)
{
	if (!HasDialogueSequence(SequenceName))
	{
		return;
	}

	// Stop any ongoing dialogue
	StopDialogue();

	CurrentSequenceName = SequenceName;
	CurrentLineIndex = 0;
	bIsPlayingDialogue = true;

	OnDialogueStarted.Broadcast();
	PlayNextLine();
}

void ADialogueManager::StopDialogue()
{
	if (!bIsPlayingDialogue)
	{
		return;
	}

	bIsPlayingDialogue = false;
	CurrentSequenceName = NAME_None;
	CurrentLineIndex = 0;
	CurrentLineElapsedTime = 0.0f;

	if (DialogueLineTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DialogueLineTimerHandle);
	}

	if (DialogueWidget)
	{
		DialogueWidget->HideDialogue();
	}

	OnDialogueEnded.Broadcast();
}

void ADialogueManager::SkipCurrentLine()
{
	if (!bIsPlayingDialogue)
	{
		return;
	}

	if (DialogueLineTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DialogueLineTimerHandle);
	}

	OnLineComplete();
}

void ADialogueManager::AddDialogueSequence(FName SequenceName, const FDialogueSequence& Sequence)
{
	DialogueSequences.Add(SequenceName, Sequence);
}

bool ADialogueManager::HasDialogueSequence(FName SequenceName) const
{
	return DialogueSequences.Contains(SequenceName);
}

void ADialogueManager::PlayPhoneCall(FName SequenceName)
{
	PlayDialogueSequence(SequenceName);

	// TODO: Show phone call UI (phone ringing, Ned's avatar, etc.)
}

void ADialogueManager::EndPhoneCall()
{
	StopDialogue();

	// TODO: Hide phone call UI
}

void ADialogueManager::PlayNextLine()
{
	if (!DialogueSequences.Contains(CurrentSequenceName))
	{
		StopDialogue();
		return;
	}

	FDialogueSequence& CurrentSequence = DialogueSequences[CurrentSequenceName];

	if (CurrentLineIndex >= CurrentSequence.Lines.Num())
	{
		StopDialogue();
		return;
	}

	FDialogueLine& CurrentLine = CurrentSequence.Lines[CurrentLineIndex];

	// Show dialogue in widget
	if (DialogueWidget)
	{
		DialogueWidget->ShowDialogue(CurrentLine);
	}

	// Play voice clip if available
	if (CurrentLine.VoiceClip)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), CurrentLine.VoiceClip);
	}

	OnDialogueLineShown.Broadcast(CurrentLine);

	CurrentLineElapsedTime = 0.0f;

	// Set timer for next line
	float LineDuration = CurrentLine.Duration > 0.0f ? CurrentLine.Duration : 3.0f;
	GetWorld()->GetTimerManager().SetTimer(
		DialogueLineTimerHandle,
		this,
		&ADialogueManager::OnLineComplete,
		LineDuration,
		false
	);
}

void ADialogueManager::OnLineComplete()
{
	CurrentLineIndex++;

	if (!DialogueSequences.Contains(CurrentSequenceName))
	{
		StopDialogue();
		return;
	}

	FDialogueSequence& CurrentSequence = DialogueSequences[CurrentSequenceName];

	if (CurrentLineIndex < CurrentSequence.Lines.Num())
	{
		// Delay before next line
		GetWorld()->GetTimerManager().SetTimer(
			DialogueLineTimerHandle,
			this,
			&ADialogueManager::PlayNextLine,
			CurrentSequence.DelayBetweenLines,
			false
		);
	}
	else
	{
		StopDialogue();
	}
}

void ADialogueManager::UpdateDialogue(float DeltaTime)
{
	CurrentLineElapsedTime += DeltaTime;
}