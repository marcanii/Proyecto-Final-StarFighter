
#include "PaS_Bullet1.h"
#include "PJ_BulletLevel1.h"

// metodo de disparo de armas
void APaS_Bullet1::ShootWeapon(FVector LocationPlayer, bool WeaponPower)
{
	if (WeaponPower == false)
	{
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();

		const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(40.f, 0.f, 0.f));

		UWorld* const World = GetWorld();
		// engendrando la bala
		if (World != nullptr)
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation, FireRotation);
	}

	// si la arma esta potenciada dispara tres balas y tambien si tenemos municiones
	if (WeaponPower == true) {
		// ubicacion y rotacion de una de las tres bala (arriba)
		const FVector FireDirection1 = FVector(1.f, 0.2f, 0.f);
		const FRotator FireRotation1 = FireDirection1.Rotation();
		const FVector SpawnLocation1 = LocationPlayer + FireRotation1.RotateVector(FVector(40.f, 20.f, 0.f));

		// ubicacion y rotacion de una de las tres bala (medio)
		const FVector FireDirection2 = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation2 = FireDirection2.Rotation();
		const FVector SpawnLocation2 = LocationPlayer + FireRotation2.RotateVector(FVector(40.f, 0.f, 0.f));

		// ubicacion y rotacion de una de las tres bala (abajo)
		const FVector FireDirection3 = FVector(1.f, -0.2f, 0.f);
		const FRotator FireRotation3 = FireDirection3.Rotation();
		const FVector SpawnLocation3 = LocationPlayer + FireRotation3.RotateVector(FVector(40.f, -20.f, 0.f));

		// engendrando las balas
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation2, FireRotation2);
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation3, FireRotation3);
		}
	}
}