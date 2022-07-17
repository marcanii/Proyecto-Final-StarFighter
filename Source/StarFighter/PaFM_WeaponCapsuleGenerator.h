
#pragma once

#include "CoreMinimal.h"
#include "PaFM_CapsuleGenerator.h"
#include "PaFM_WeaponCapsuleGenerator.generated.h"


UCLASS()
class STARFIGHTER_API APaFM_WeaponCapsuleGenerator : public APaFM_CapsuleGenerator
{
	GENERATED_BODY()
	
public:
	// metodo para la creacion de capsulas
	virtual AMyCapsule* MakeCapsule(FString CapsuleTypeName) override;
};
