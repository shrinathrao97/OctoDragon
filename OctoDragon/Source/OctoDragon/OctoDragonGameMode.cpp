// Copyright Epic Games, Inc. All Rights Reserved.

#include "OctoDragonGameMode.h"
#include "OctoDragonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOctoDragonGameMode::AOctoDragonGameMode()
{
	// Set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player1/MyCharacter1_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
