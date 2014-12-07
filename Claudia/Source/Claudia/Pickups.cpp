// Fill out your copyright notice in the Description page of Project Settings.

#include "Claudia.h"
#include "Pickups.h"


APickups::APickups(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PrimaryActorTick.bCanEverTick = true;

	TouchSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("TouchSphereComponent"));
	TouchSphere->SetSphereRadius(20.f, false);
	//This sets the root of the object.
	RootComponent = TouchSphere;

	RotationRate = 180.f;
}

void APickups::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator MyRot = GetActorRotation();
	MyRot.Roll += RotationRate * DeltaTime;
	SetActorRotation(MyRot);

}


