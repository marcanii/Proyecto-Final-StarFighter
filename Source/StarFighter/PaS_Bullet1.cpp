// Fill out your copyright notice in the Description page of Project Settings.


#include "PaS_Bullet1.h"
#include "PJ_BulletLevel1.h"


void APaS_Bullet1::ShootWeapon(FVector LocationPlayer)
{
	const FVector FireDirection = FVector(1.f, 0.f, 0.f);
	const FRotator FireRotation = FireDirection.Rotation();

	const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(40.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	// engendrando la bala
	if (World != nullptr)
		World->SpawnActor<APJ_BulletLevel1>(SpawnLocation, FireRotation);
}