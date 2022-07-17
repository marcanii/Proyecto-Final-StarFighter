// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_WeaponCapsuleGenerator.h"
#include "C_EmpowerWeapon.h"
#include "C_Shield.h"

AMyCapsule* APaFM_WeaponCapsuleGenerator::MakeCapsule(FString CapsuleTypeName)
{
	float RandomSpawnX = FMath::RandRange(-650, 300);	// Un punto en el eje X
	const FVector SpawnLocation = FVector(RandomSpawnX, -360.f, 0.f);	// punto de creacion de la capsula
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);	// rotacioi de la capsula

	if (CapsuleTypeName.Equals("EmpowerWeapon"))
		return GetWorld()->SpawnActor<AC_EmpowerWeapon>(SpawnLocation, Rotation);
	
	if (CapsuleTypeName.Equals("Shield"))
		return GetWorld()->SpawnActor<AC_Shield>(SpawnLocation, Rotation);
	
    return nullptr;
}
