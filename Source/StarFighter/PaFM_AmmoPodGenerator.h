
#pragma once

#include "CoreMinimal.h"
#include "PaFM_CapsuleGenerator.h"
#include "PaFM_AmmoPodGenerator.generated.h"


UCLASS()
class STARFIGHTER_API APaFM_AmmoPodGenerator : public APaFM_CapsuleGenerator
{
	GENERATED_BODY()
	
public:
	// metodo para la creacion de capsulas
	virtual AMyCapsule* MakeCapsule(FString CapsuleTypeName) override;
};
