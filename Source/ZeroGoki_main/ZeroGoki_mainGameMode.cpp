// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeroGoki_mainGameMode.h"
#include "ZeroGoki_mainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGoki_mainGameMode::AZeroGoki_mainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
