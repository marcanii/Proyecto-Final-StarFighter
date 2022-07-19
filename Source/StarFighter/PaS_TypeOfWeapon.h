
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_ChangeWeapon.h"
#include "PaS_TypeOfWeapon.generated.h"

UCLASS()
class STARFIGHTER_API APaS_TypeOfWeapon : public AActor
{
	GENERATED_BODY()
	
private:
	IPaS_ChangeWeapon* ChangeWeapon;

public:
	// metodo para cambiar el arma
	void AlterShoot(AActor* MyChanceWeapon);
	// metodo para usar el arma 
	void UseWeapon(FVector _LocationPlayer, bool Activate);
};
