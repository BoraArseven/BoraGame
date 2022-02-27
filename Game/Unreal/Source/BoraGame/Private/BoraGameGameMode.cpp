// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoraGameGameMode.h"
#include "BoraGameHUD.h"
#include "BoraGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABoraGameGameMode::ABoraGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABoraGameHUD::StaticClass();
}
