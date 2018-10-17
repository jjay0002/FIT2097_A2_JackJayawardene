// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FIT2097_A2_JackJHUD.generated.h"

UCLASS()
class AFIT2097_A2_JackJHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFIT2097_A2_JackJHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	//virtual void BeginPlay() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

