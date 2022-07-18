// Fill out your copyright notice in the Description page of Project Settings.

#include "PaS_Lasser.h"
#include "PJ_Laser.h"

void APaS_Lasser::ShootWeapon(FVector LocationPlayer)
{
	const FVector FireDirection = FVector(1.f, 0.f, 0.f);
	const FRotator FireRotation = FireDirection.Rotation();

	const FVector SpawnLocation = LocationPlayer + FireRotation.RotateVector(FVector(700.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	// engendrando la bala
	if (World != nullptr)
		World->SpawnActor<APJ_Laser>(SpawnLocation, FireRotation);
}
