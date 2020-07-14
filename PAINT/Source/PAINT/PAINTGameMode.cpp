// Copyright Epic Games, Inc. All Rights Reserved.

#include "PAINTGameMode.h"
#include "PAINTCharacter.h"
#include "UObject/ConstructorHelpers.h"

APAINTGameMode::APAINTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
