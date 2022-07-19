
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PaS_ChangeWeapon.generated.h"

// Esta clase no necesita ser modificada.
UINTERFACE(MinimalAPI)
class UPaS_ChangeWeapon : public UInterface
{
	GENERATED_BODY()
};

// Esta es la clase que se heredará para implementar esta interfaz.
class STARFIGHTER_API IPaS_ChangeWeapon
{
	GENERATED_BODY()

	// Agregue funciones de interfaz a esta clase.
public:
	// metodo de disparo de armas 
	virtual void ShootWeapon(FVector LocationPlayer, bool WeaponPower) = 0;
};
