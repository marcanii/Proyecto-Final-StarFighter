
#include "PaS_Bullet2.h"
#include "PJ_BulletLevel2.h"

// metodo de disparo de armas
void APaS_Bullet2::ShootWeapon(FVector LocationPlayer, bool WeaponPower)
{
	// si el arma no esta potenciada
	if (WeaponPower == false)
	{
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();

		const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(65.f, 0.f, 0.f));

		UWorld* const World = GetWorld();
		// engendrando la bala
		if (World != nullptr)
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation, FireRotation);
	}
	
	// si el arma esta potenciada
	if (WeaponPower == true) {
		// direccion y rotacion para las tres balas seran las mismas
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();

		// ubicacion de una de las balas (arriba)
		const FVector SpawnLocation1 = LocationPlayer + FireRotation.RotateVector(FVector(65.f, 20.f, 0.f));
		// ubicacion de una de las balas (medio)
		const FVector SpawnLocation2 = LocationPlayer + FireRotation.RotateVector(FVector(65.f, 0.f, 0.f));
		// ubicacion de una de las balas (abajo)
		const FVector SpawnLocation3 = LocationPlayer + FireRotation.RotateVector(FVector(65.f, -20.f, 0.f));

		// engendrando las balas
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation1, FireRotation);
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation2, FireRotation);
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation3, FireRotation);
		}
	}
}
