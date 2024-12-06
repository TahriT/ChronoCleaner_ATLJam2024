// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChronoCleanerGameMode.h"
#include "ChronoCleanerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChronoCleanerGameMode::AChronoCleanerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
