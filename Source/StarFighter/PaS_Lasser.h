
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_ChangeWeapon.h"
#include "PaS_Lasser.generated.h"

UCLASS()
class STARFIGHTER_API APaS_Lasser : public AActor, public IPaS_ChangeWeapon
{
	GENERATED_BODY()
	
public:	
	// metodo de disparo de armas
	void ShootWeapon(FVector LocationPlayer, bool WeaponPower) override;
};
