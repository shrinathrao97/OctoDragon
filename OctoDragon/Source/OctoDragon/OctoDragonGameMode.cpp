// Copyright Epic Games, Inc. All Rights Reserved.

#include "OctoDragonGameMode.h"
#include "OctoDragonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOctoDragonGameMode::AOctoDragonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
