// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS_10cent_HWGameMode.h"
#include "TPS_10cent_HWCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_10cent_HWGameMode::ATPS_10cent_HWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
