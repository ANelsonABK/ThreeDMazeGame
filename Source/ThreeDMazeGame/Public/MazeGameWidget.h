// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MazeGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class THREEDMAZEGAME_API UMazeGameWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
		void StartCountdown(float CountdownTime, class AMazeGamePlayerController* MazeGamePlayerController);

	UFUNCTION(BlueprintImplementableEvent)
		void LevelComplete();

	UFUNCTION(BlueprintImplementableEvent)
		void DisplayResults();

	UFUNCTION(BlueprintImplementableEvent)
		void RemoveResults();
};
