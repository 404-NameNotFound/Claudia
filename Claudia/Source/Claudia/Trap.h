

#pragma once

#include "GameFramework/Actor.h"
#include "Trap.generated.h"

/**
 * 
 */
UCLASS()
class CLAUDIA_API ATrap : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Trap)
	TSubobjectPtr<UBoxComponent> BoxCollider;


	
};
