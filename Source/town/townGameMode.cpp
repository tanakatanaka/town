// Copyright Epic Games, Inc. All Rights Reserved.

#include "townGameMode.h"
#include "townCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtownGameMode::AtownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
