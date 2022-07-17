
#include "PaFM_AmmoPodGenerator.h"
#include "C_BulletAmmunition1.h"
#include "C_BulletAmmunition2.h"
#include "C_LaserAmmunition.h"
#include "C_MissileAmmunition.h"

// Metodo para la creacion de capsulas
AMyCapsule* APaFM_AmmoPodGenerator::MakeCapsule(FString CapsuleTypeName)
{
	float RandomSpawnX = FMath::RandRange(-700, 300);	// Un punto en el eje X
	const FVector SpawnLocation = FVector(RandomSpawnX, -360.f, 0.f);	// punto de creacion de la capsula
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);	// rotacioi de la capsula

	if (CapsuleTypeName.Equals("BulletAmmunition1"))
		return GetWorld()->SpawnActor<AC_BulletAmmunition1>(SpawnLocation, Rotation);

	if (CapsuleTypeName.Equals("BulletAmmunition"))
		return GetWorld()->SpawnActor<AC_BulletAmmunition2>(SpawnLocation, Rotation);

	if (CapsuleTypeName.Equals("LaserAmmunition"))
		return GetWorld()->SpawnActor<AC_LaserAmmunition>(SpawnLocation, Rotation);

	if (CapsuleTypeName.Equals("MissileAmmunition"))
		return GetWorld()->SpawnActor<AC_MissileAmmunition>(SpawnLocation, Rotation);

	return nullptr;
}
