// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarFighterGameModeBase.generated.h"


UCLASS()
class STARFIGHTER_API AStarFighterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Establece valores predeterminados para las propiedades de este actor (Constructor)
	AStarFighterGameModeBase();

	UPROPERTY(EditAnywhere, Category = "Componentes Asteroides")
		class USoundBase* SoundSpawnAsteroids;	// sonido al espawnear

	UPROPERTY(EditAnywhere, Category = "Sonido Alarma")
		class USoundBase* SoundAlarm;	// sonido al espawnear

private:
	// declarando propiedades para el uso de la creacion de escuadrones
	class APaB_BattleSquadsReady* BattleSquadsReady;	// escuadrones listos
	class APaB_EnemyMasterChief* EnemyMasterChief;		// enemigo jefe maestro

	// player ship
	class APass* LevelPass;

	// spawn asteroides variables 
	float SpawnAsteroidTime;
	float TopSpawnAsteroidTime;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

private:
	// propiedades para la creacion de capsulas
	float StartSpawnCapsule;
	float TopSpawnCapsule;

	// propiedades para la creacion de enemigos nivel 1
	float StartSpawnEnemyLevel1;
	float TopSpawnenemyLevel1;
	int32 countEnemyL1;
	float SpawnSquatLevel1;
	float SpawnMotherShipLevel1;

	// propiedades para la creacion de enemigos nivel 2
	float StartSpawnEnemyLevel2;
	float TopSpawnenemyLevel2;
	int32 countEnemyL2;
	float SpawnSquatLevel2;
	float SpawnMotherShipLevel2;

	// propiedades para la creacion de enemigos nivel 3
	float StartSpawnEnemyLevel3;
	float TopSpawnenemyLevel3;
	int32 countEnemyL3;
	float SpawnSquatLevel3;
	float SpawnMotherShipLevel3;

	// propiedades para la creacion de enemigos nivel 4
	float StartSpawnEnemyLevel4;
	float TopSpawnenemyLevel4;
	int32 countEnemyL4;
	float SpawnSquatLevel4;
	float SpawnMotherShipLevel4;

	// propiedades para la creacion de enemigos nivel 5
	float StartSpawnEnemyLevel5;
	float TopSpawnenemyLevel5;
	int32 countEnemyL5;
	float SpawnSquatLevel5;
	float SpawnMotherShipLevel5;
};
