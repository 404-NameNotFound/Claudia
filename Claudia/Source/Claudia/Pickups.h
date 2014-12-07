// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickups.generated.h"

/**
 * 
 */
UCLASS()
class CLAUDIA_API APickups : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Pickups)
	TSubobjectPtr<USphereComponent> TouchSphere;

	UPROPERTY(VisibleDefaultsOnly, Category = Pickups)
	float RotationRate;
	
	virtual void Tick(float DeltaTime) override;

};
