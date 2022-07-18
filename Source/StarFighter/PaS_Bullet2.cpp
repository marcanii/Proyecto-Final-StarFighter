// Fill out your copyright notice in the Description page of Project Settings.


#include "PaS_Bullet2.h"
#include "PJ_BulletLevel2.h"

void APaS_Bullet2::ShootWeapon(FVector LocationPlayer)
{
	const FVector FireDirection = FVector(1.f, 0.f, 0.f);
	const FRotator FireRotation = FireDirection.Rotation();

	const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(65.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	// engendrando la bala
	if (World != nullptr)
		World->SpawnActor<APJ_BulletLevel2>(SpawnLocation, FireRotation);
}
