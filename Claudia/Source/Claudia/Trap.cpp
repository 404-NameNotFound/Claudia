

#include "Claudia.h"
#include "Trap.h"


ATrap::ATrap(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

	BoxCollider = PCIP.CreateDefaultSubobject<UBoxComponent>(this, TEXT("BoxCollider"));

	RootComponent = BoxCollider;

	
}


