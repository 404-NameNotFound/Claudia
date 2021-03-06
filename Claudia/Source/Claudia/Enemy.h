// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class CLAUDIA_API AEnemy : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Pickups)
	TSubobjectPtr<UCapsuleComponent> ColliderCapsule;

	UPROPERTY(VisibleDefaultsOnly, Category = CharacterStats)
	float characterCurrentHealth;

	UPROPERTY(VisibleDefaultsOnly, Category = CharacterStats)
	float characterMaxHealth;

	UPROPERTY(VisibleDefaultsOnly, Category = CharacterStats)
	float attackDamage;

	UPROPERTY(VisibleDefaultsOnly, Category = CharacterStats)
	float attackRange;
	
	
};
