// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDoor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "FIT2097_A2_JackJGameMode.h"
#include "Engine.h"


AMyDoor::AMyDoor() : AStaticReplicatingActor(), door_rotate(0,0,0){
	GetStaticMeshComponent()->SetSimulatePhysics(false);
	SetActorTickEnabled(true);
	PrimaryActorTick.bCanEverTick = true;
}

void AMyDoor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	if (Role == ROLE_Authority) {
		LerpDoor(DeltaTime);
	}
}

void AMyDoor::InteractWithActor() {
	OpenDoor();
	
}

void AMyDoor::OpenDoor(){
	AFIT2097_A2_JackJGameMode * myGameMode = Cast<AFIT2097_A2_JackJGameMode>(GetWorld()->GetAuthGameMode());
	

	if (GetWorld())
	{
		AFIT2097_A2_JackJGameMode* myGameMode = Cast<AFIT2097_A2_JackJGameMode>(GetWorld()->GetAuthGameMode());
		if (myGameMode) {
			if (myGameMode->GetKeyState()) {
				door_rotate = FVector(0, 0, 90);
			}
		}
	}
}


void AMyDoor::LerpDoor(float DeltaTime) {
	FVector vec = FMath::Lerp(GetActorRotation().Euler(), door_rotate, 2.0f *DeltaTime);
	SetActorRelativeRotation(FRotator::MakeFromEuler(vec));
}