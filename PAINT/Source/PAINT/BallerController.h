// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BallerController.generated.h"


class ABaller;

UCLASS()
class PAINT_API ABallerController : public APlayerController
{
	GENERATED_BODY()

public:

	void ManageCrossHair();

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HUDClass;

	UUserWidget* CrossHair;

	ABaller* ThaBaller;


	// UPROPERTY(EditAnywhere)
	// TSubclassOf<class UUserWidget> LoseScreenClass;

	// UPROPERTY(EditAnywhere)
	// TSubclassOf<class UUserWidget> WinScreenClass;

	// UPROPERTY(EditAnywhere)
	// float RestartDelay = 5.f;

	// FTimerHandle RestartTimer;


protected:

	virtual void BeginPlay() override;
};
