// Fill out your copyright notice in the Description page of Project Settings.

#include "Claudia.h"
#include "Enemy.h"


AEnemy::AEnemy(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

	ColliderCapsule = PCIP.CreateDefaultSubobject<UCapsuleComponent>(this, TEXT("CapsuleCollider"));
	ColliderCapsule->InitCapsuleSize(42.f, 42.f);

	RootComponent = ColliderCapsule;

}


