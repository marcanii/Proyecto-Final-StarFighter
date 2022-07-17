
#include "PaFM_PowerCapsuleGenerator.h"
#include "C_Energy.h"
#include "C_NegativeEnergy.h"
#include "C_Speed.h"
#include "C_NegativeSpeed.h"
#include "C_Life.h"

// Metodo para la creacion de capsulas
AMyCapsule* APaFM_PowerCapsuleGenerator::MakeCapsule(FString CapsuleTypeName)
{
	float RandomSpawnX = FMath::RandRange(-650, 300);	// Un punto en el eje X
	const FVector SpawnLocation = FVector(RandomSpawnX, -360.f, 0.f);	// punto de creacion de la capsula
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);	// rotacioi de la capsula

	if (CapsuleTypeName.Equals("Energy"))
		return GetWorld()->SpawnActor<AC_Energy>(SpawnLocation, Rotation);
	
	if (CapsuleTypeName.Equals("NegativeEnergy"))
		return GetWorld()->SpawnActor<AC_NegativeEnergy>(SpawnLocation, Rotation);
	
	if (CapsuleTypeName.Equals("Speed"))
		return GetWorld()->SpawnActor<AC_Speed>(SpawnLocation, Rotation);
	
	if (CapsuleTypeName.Equals("NegativeSpeed"))
		return GetWorld()->SpawnActor<AC_Speed>(SpawnLocation, Rotation);
	
	if (CapsuleTypeName.Equals("Life"))
		return GetWorld()->SpawnActor<AC_Life>(SpawnLocation, Rotation);
	
	return nullptr;
}
