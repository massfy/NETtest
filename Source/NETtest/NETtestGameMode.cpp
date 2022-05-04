// Copyright Epic Games, Inc. All Rights Reserved.

#include "NETtestGameMode.h"
#include "NETtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANETtestGameMode::ANETtestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
