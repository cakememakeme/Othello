// Copyright Epic Games, Inc. All Rights Reserved.

#include "OthelloGameMode.h"
#include "OthelloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOthelloGameMode::AOthelloGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
