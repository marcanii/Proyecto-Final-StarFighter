
#include "PaS_Missile.h"
#include "PJ_Missile.h"

// metodo de disparo de armas
void APaS_Missile::ShootWeapon(FVector LocationPlayer, bool WeaponPower)
{
	// ubicacion del misil
	const FVector FireDirection = FVector(1.f, 0.f, 0.f);
	const FRotator FireRotation = FireDirection.Rotation();

	const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(73.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	// engendrando la bala
	if (World != nullptr)
		World->SpawnActor<APJ_Missile>(SpawnLocation, FireRotation);
}
