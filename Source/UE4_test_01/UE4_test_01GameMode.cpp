// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4_test_01GameMode.h"
#include "UE4_test_01HUD.h"
#include "UE4_test_01Character.h"
#include "UObject/ConstructorHelpers.h"

AUE4_test_01GameMode::AUE4_test_01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4_test_01HUD::StaticClass();
}
