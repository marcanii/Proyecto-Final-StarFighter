
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_ChangeWeapon.h"
#include "PaS_Bullet1.generated.h"

UCLASS()
class STARFIGHTER_API APaS_Bullet1 : public AActor, public IPaS_ChangeWeapon
{
	GENERATED_BODY()

public:
	// metodo de disparo de armas
	void ShootWeapon(FVector LocationPlayer, bool WeaponPower) override;
};
