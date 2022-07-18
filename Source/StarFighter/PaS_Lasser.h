// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_ChangeWeapon.h"
#include "PaS_Lasser.generated.h"

UCLASS()
class STARFIGHTER_API APaS_Lasser : public AActor, public IPaS_ChangeWeapon
{
	GENERATED_BODY()
	
public:	
	
	void ShootWeapon(FVector LocationPlayer) override;
};
