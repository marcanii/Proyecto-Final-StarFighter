// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_ChangeWeapon.h"
#include "PaS_TypeOfWeapon.generated.h"

UCLASS()
class STARFIGHTER_API APaS_TypeOfWeapon : public AActor
{
	GENERATED_BODY()
	
private:
	IPaS_ChangeWeapon* ChangeWeapon;

public:

	void AlterShoot(AActor* MyChanceWeapon);

	void Change(FVector _LocationPlayer);
};
