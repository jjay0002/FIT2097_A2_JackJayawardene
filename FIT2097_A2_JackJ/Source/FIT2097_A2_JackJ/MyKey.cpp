// Fill out your copyright notice in the Description page of Project Settings.

#include "MyKey.h"
#include "Engine.h"
#include "FIT2097_A2_JackJGameMode.h"

void AMyKey::InteractWithActor() {
	if (GEngine) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "YYEET");
	}
	
	if (GetWorld())
	{
		AFIT2097_A2_JackJGameMode* myGameMode = Cast<AFIT2097_A2_JackJGameMode>(GetWorld()->GetAuthGameMode());

		if (myGameMode) {
			myGameMode->SetGotKey(true);
			Destroy();
		}
	}

}