// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDoor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

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

void AMyDoor::OpenDoor_Implementation() {
	door_rotate = FVector(0, 0, 90);
}


bool AMyDoor::OpenDoor_Validate(){
	return true;
}

void AMyDoor::LerpDoor(float DeltaTime) {
	FVector vec = FMath::Lerp(GetActorRotation().Euler(), door_rotate, 2.0f *DeltaTime);
	SetActorRelativeRotation(FRotator::MakeFromEuler(vec));
}