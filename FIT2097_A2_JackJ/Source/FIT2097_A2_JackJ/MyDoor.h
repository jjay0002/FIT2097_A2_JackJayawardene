// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StaticReplicatingActor.h"
#include "MyDoor.generated.h"

/**
 * 
 */
UCLASS()
class FIT2097_A2_JACKJ_API AMyDoor : public AStaticReplicatingActor
{
	GENERATED_BODY()


public:
	FVector door_rotate;

	AMyDoor();
	void Tick(float DeltaTime);
	void InteractWithActor();
	void LerpDoor(float DeltaTime);

	UFUNCTION(Server, Reliable, WithValidation)
		void OpenDoor();
	
};
