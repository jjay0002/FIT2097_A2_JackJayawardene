// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FIT2097_A2_JackJGameMode.h"
#include "FIT2097_A2_JackJHUD.h"
#include "FIT2097_A2_JackJCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFIT2097_A2_JackJGameMode::AFIT2097_A2_JackJGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFIT2097_A2_JackJHUD::StaticClass();
}
