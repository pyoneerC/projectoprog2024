// Copyright Epic Games, Inc. All Rights Reserved.

#include "projectoprog2024GameMode.h"
#include "projectoprog2024Character.h"
#include "UObject/ConstructorHelpers.h"

Aprojectoprog2024GameMode::Aprojectoprog2024GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
