
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCapsule.h"
#include "PaFM_CapsuleGenerator.generated.h"

UCLASS()
class STARFIGHTER_API APaFM_CapsuleGenerator : public AActor
{
	GENERATED_BODY()

public:
	// metodo para obtener la capsula
	AMyCapsule* getCapsule(FString TypeCapsule);
protected:
	// metodo virtual puro para la creacion de capsulas
	virtual AMyCapsule* MakeCapsule(FString CapsuleTypeName) PURE_VIRTUAL(APaFM_CapsuleGenerator::MakeCapsule, return nullptr;);
};
