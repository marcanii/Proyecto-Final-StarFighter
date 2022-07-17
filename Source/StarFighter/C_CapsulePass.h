
#pragma once

#include "CoreMinimal.h"
#include "MyCapsule.h"
#include "C_CapsulePass.generated.h"


UCLASS()
class STARFIGHTER_API AC_CapsulePass : public AMyCapsule
{
	GENERATED_BODY()
	
public:
	// Constructor
	AC_CapsulePass();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
};
