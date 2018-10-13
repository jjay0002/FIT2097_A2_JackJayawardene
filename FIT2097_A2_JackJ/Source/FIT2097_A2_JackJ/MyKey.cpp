// Fill out your copyright notice in the Description page of Project Settings.

#include "MyKey.h"
#include "Engine.h"

void AMyKey::InteractWithActor() {
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "YYEET");
}