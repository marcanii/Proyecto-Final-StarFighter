// Copyright Epic Games, Inc. All Rights Reserved.

#include "StarFighterGameModeBase.h"
#include "PaS_Scenery.h"
#include "PlayerShip.h"
#include "PaFM_WeaponCapsuleGenerator.h"
#include "PaFM_PowerCapsuleGenerator.h"
#include "PaFM_AmmoPodGenerator.h"
#include "EnemyLevel1.h"
#include "EnemyLevel2.h"
#include "EnemyLevel3.h"
#include "EnemyLevel4.h"
#include "EnemyLevel5.h"
#include "PaB_BattleSquadsReady.h"
#include "PaB_EnemyMasterChief.h"
#include "MotherShipLevel1.h"
#include "MotherShipLevel2.h"
#include "MotherShipLevel3.h"
#include "MotherShipLevel4.h"
#include "MotherShipLevel5.h"
#include "LevelPass.h"
#include "Asteroids.h"
#include "Pass.h"
#include "Kismet/GameplayStatics.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AStarFighterGameModeBase::AStarFighterGameModeBase()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	DefaultPawnClass = APlayerShip::StaticClass();

	// inicializando los valores a las propiedades que usara la fabrica de capsula
	StartSpawnCapsule = 0.0;
	TopSpawnCapsule = 5.f;

	// inicializando variables para spawnear asteroides
	SpawnAsteroidTime = 0.f;
	TopSpawnAsteroidTime = 17.f;

	// creando sonido de spawnear
	static ConstructorHelpers::FObjectFinder<USoundBase> SpawnAudio(TEXT("SoundWave'/Game/Sound/Asteroind.Asteroind'"));
	SoundSpawnAsteroids = SpawnAudio.Object;

	// creando sonido de alarma
	static ConstructorHelpers::FObjectFinder<USoundBase> AlarmAudio(TEXT("SoundWave'/Game/Sound/Alarma.Alarma'"));
	SoundAlarm = AlarmAudio.Object;

	// inicializando variables para el uso del nivel 1
	StartSpawnEnemyLevel1 = 0.f;
	TopSpawnenemyLevel1 = 4.f;
	countEnemyL1 = 0;
	SpawnSquatLevel1 = 0.f;
	SpawnMotherShipLevel1 = 0.f;

	// inicializando variables para el uso del nivel 2
	StartSpawnEnemyLevel2 = 0.f;
	TopSpawnenemyLevel2 = 3.f;
	countEnemyL2 = 0;
	SpawnSquatLevel2 = 0.f;
	SpawnMotherShipLevel2 = 0.f;

	// inicializando variables para el uso del nivel 3
	StartSpawnEnemyLevel3 = 0.f;
	TopSpawnenemyLevel3 = 4.f;
	countEnemyL3 = 0;
	SpawnSquatLevel3 = 0.f;
	SpawnMotherShipLevel3 = 0.f;

	// inicializando variables para el uso del nivel 4
	StartSpawnEnemyLevel4 = 0.f;
	TopSpawnenemyLevel4 = 4.f;
	countEnemyL4 = 0;
	SpawnSquatLevel4 = 0.f;
	SpawnMotherShipLevel4 = 0.f;

	// inicializando variables para el uso del nivel 5
	StartSpawnEnemyLevel5 = 0.f;
	TopSpawnenemyLevel5 = 4.f;
	countEnemyL5 = 0;
	SpawnSquatLevel5 = 0.f;
	SpawnMotherShipLevel5 = 0.f;
}

// Llamado cuando comienza el juego o cuando se genera
void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	const FVector Location = FVector(0.f, 0.f, -350.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);
	APaS_Scenery* Scenery = GetWorld()->SpawnActor<APaS_Scenery>(Location, Rotation);
	//APlayerShip* Scenery = GetWorld()->SpawnActor<APlayerShip>(Location, Rotation);

	// Sistema para la creacion de los escuadrones
	BattleSquadsReady = GetWorld()->SpawnActor<APaB_BattleSquadsReady>(APaB_BattleSquadsReady::StaticClass());
	// Creamos al jefe maestro enemigo
	EnemyMasterChief = GetWorld()->SpawnActor<APaB_EnemyMasterChief>(APaB_EnemyMasterChief::StaticClass());
	// Mandamos al jefe enemigo las escuadras listas para llamar
	EnemyMasterChief->setSquadBuilder(BattleSquadsReady);
	
	// clase statica para saber cuando pasa al siguiente nivel
	LevelPass = GetWorld()->SpawnActor<APass>(APass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AStarFighterGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Sistema para aparicion de las capsulas
	StartSpawnCapsule += DeltaTime;
	if (StartSpawnCapsule >= TopSpawnCapsule)
	{
		StartSpawnCapsule = 0.f;
		float AppearanceChance = FMath::RandRange(0, 150);	// probabilidad de aparicion para cada capsula
		// declarando la fabrica de capsula
		APaFM_CapsuleGenerator* CapsuleGenerator;
		if (AppearanceChance <= 20.f) {		// para municion de la bala 1 del jugador
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_AmmoPodGenerator>(APaFM_AmmoPodGenerator::StaticClass());
			CapsuleGenerator->getCapsule("BulletAmmunition1");
		}
		if (AppearanceChance > 20.f && AppearanceChance <= 35.f) {	// para municion de la bala 2 del jugador
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_AmmoPodGenerator>(APaFM_AmmoPodGenerator::StaticClass());
			CapsuleGenerator->getCapsule("BulletAmmunition2");
		}
		if (AppearanceChance > 35.f && AppearanceChance <= 45.f) {	// para municiones del laser del jugador
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_AmmoPodGenerator>(APaFM_AmmoPodGenerator::StaticClass());
			CapsuleGenerator->getCapsule("LaserAmmunition");
		}
		if (AppearanceChance > 45.f && AppearanceChance <= 55.f) {	// para municiones del misil del jugador
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_AmmoPodGenerator>(APaFM_AmmoPodGenerator::StaticClass());
			CapsuleGenerator->getCapsule("MissileAmmunition");
		}
		if (AppearanceChance > 55.f && AppearanceChance <= 60.f) {	// para capsula vida
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_PowerCapsuleGenerator>(APaFM_PowerCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("Life");
		}
		if (AppearanceChance > 60.f && AppearanceChance <= 75.f) {	// para capsula energia
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_PowerCapsuleGenerator>(APaFM_PowerCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("Energy");
		}
		if (AppearanceChance > 75.f && AppearanceChance <= 95.f) {	// para capsula energia negativa
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_PowerCapsuleGenerator>(APaFM_PowerCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("NegativeEnergy");
		}
		if (AppearanceChance > 95.f && AppearanceChance <= 105.f) {	// para capsula de velocidad
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_PowerCapsuleGenerator>(APaFM_PowerCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("Speed");
		}
		if (AppearanceChance > 105.f && AppearanceChance <= 125.f) {	// para capsula de velocidad negativa
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_PowerCapsuleGenerator>(APaFM_PowerCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("NegativeSpeed");
		}
		if (AppearanceChance > 125.f && AppearanceChance <= 140.f) {	// para capsula potenciar armar del jugador
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_WeaponCapsuleGenerator>(APaFM_WeaponCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("EmpowerWeapon");
		}
		if (AppearanceChance > 140.f && AppearanceChance <= 150.f) {	// para capsula escudo
			CapsuleGenerator = GetWorld()->SpawnActor<APaFM_WeaponCapsuleGenerator>(APaFM_WeaponCapsuleGenerator::StaticClass());
			CapsuleGenerator->getCapsule("Shield");
		}
	}

	// sistema para spawnear asteroides
	SpawnAsteroidTime += DeltaTime;
	if (SpawnAsteroidTime >= TopSpawnAsteroidTime)
	{
		SpawnAsteroidTime = 0.f;
		float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
		const FVector SpawnLocationAst = FVector(750, RandomSpawnY, 0.f);	// punto de creacion del asteroide
		const FRotator RotationAst = FRotator(0.f, 0.f, 0.f);	// rotacion del asteroide

		AAsteroids* Asteroid = GetWorld()->SpawnActor<AAsteroids>(SpawnLocationAst, RotationAst);
		if (SoundSpawnAsteroids != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundSpawnAsteroids, Asteroid->GetActorLocation());
	}

	// nivel 1
	if (LevelPass->getCapsulePass() == 1)
	{
		// Sistema para la aparicion de las naves enemigas de nivel 1
		StartSpawnEnemyLevel1 += DeltaTime;
		if (StartSpawnEnemyLevel1 >= TopSpawnenemyLevel1 && countEnemyL1 != 7)
		{
			StartSpawnEnemyLevel1 = 0.f;
			float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
			const FVector SpawnLocationEL1 = FVector(850, RandomSpawnY, 0.f);	// punto de creacion de la nave
			const FRotator RotationEL1 = FRotator(0.f, 0.f, 0.f);	// rotacion de la nave

			GetWorld()->SpawnActor<AEnemyLevel1>(SpawnLocationEL1, RotationEL1);
			countEnemyL1 += 1;
		}

		// llamando a la creacion del primer escuadron
		SpawnSquatLevel1 += DeltaTime;
		if (SpawnSquatLevel1 >= 34.f && SpawnSquatLevel1 <= 36.f) {
			EnemyMasterChief->ConstructSquads("SquadLevel1");
			SpawnSquatLevel1 += 10;
			if (SoundAlarm != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, SoundAlarm, EnemyMasterChief->GetActorLocation());
		}

		// llamando a la nave nodriza nivel 1
		SpawnMotherShipLevel1 += DeltaTime;
		if (SpawnMotherShipLevel1 >= 72.f && SpawnMotherShipLevel1 <= 74.f)
		{
			const FVector MotherShipLocation = FVector(750.f, 0.f, 0.0f);
			const FRotator MotherShipRotation = FRotator(0.f, 0.f, 0.f);
			GetWorld()->SpawnActor<AMotherShipLevel1>(MotherShipLocation, MotherShipRotation);
			SpawnMotherShipLevel1 += 10.f;
		}
	}
	
	// nivel 2
	if (LevelPass->getCapsulePass() == 2)
	{
		// Sistema para la aparicion de las naves enemigas de nivel 2
		StartSpawnEnemyLevel2 += DeltaTime;
		if (StartSpawnEnemyLevel2 >= TopSpawnenemyLevel2 && countEnemyL2 != 10)
		{
			StartSpawnEnemyLevel2 = 0.f;
			float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
			const FVector SpawnLocationEL2 = FVector(850, RandomSpawnY, 0.f);	// punto de creacion de la nave
			const FRotator RotationEL2 = FRotator(0.f, 0.f, 0.f);	// rotacion de la nave

			GetWorld()->SpawnActor<AEnemyLevel2>(SpawnLocationEL2, RotationEL2);
			countEnemyL2 += 1;
		}

		// llamando a la creacion del segundo escuadron
		SpawnSquatLevel2 += DeltaTime;
		if (SpawnSquatLevel2 >= 40.f && SpawnSquatLevel2 <= 42.f) {
			EnemyMasterChief->ConstructSquads("SquadLevel2");
			SpawnSquatLevel2 += 10;
			if (SoundAlarm != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, SoundAlarm, EnemyMasterChief->GetActorLocation());
		}

		// llamando a la nave nodriza nivel 2
		SpawnMotherShipLevel2 += DeltaTime;
		if (SpawnMotherShipLevel2 >= 75.f && SpawnMotherShipLevel2 <= 77.f)
		{
			const FVector MotherShipLocation = FVector(750.f, 0.f, 0.0f);
			const FRotator MotherShipRotation = FRotator(0.f, 0.f, 0.f);
			GetWorld()->SpawnActor<AMotherShipLevel2>(MotherShipLocation, MotherShipRotation);
			SpawnMotherShipLevel2 += 10.f;
		}
	}

	// nivel 3
	if (LevelPass->getCapsulePass() == 3)
	{
		// Sistema para la aparicion de las naves enemigas de nivel 3
		StartSpawnEnemyLevel3 += DeltaTime;
		if (StartSpawnEnemyLevel3 >= TopSpawnenemyLevel3 && countEnemyL3 != 14)
		{
			StartSpawnEnemyLevel3 = 0.f;
			float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
			const FVector SpawnLocationEL3 = FVector(850, RandomSpawnY, 0.f);	// punto de creacion de la nave
			const FRotator RotationEL3 = FRotator(0.f, 0.f, 0.f);	// rotacion de la nave

			GetWorld()->SpawnActor<AEnemyLevel3>(SpawnLocationEL3, RotationEL3);
			countEnemyL3 += 1;
		}

		// llamando a la creacion del tercer escuadron
		SpawnSquatLevel3 += DeltaTime;
		if (SpawnSquatLevel3 >= 65.f && SpawnSquatLevel3 <= 67.f) {
			EnemyMasterChief->ConstructSquads("SquadLevel3");
			SpawnSquatLevel3 += 10;
			if (SoundAlarm != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, SoundAlarm, EnemyMasterChief->GetActorLocation());
		}

		// llamando a la nave nodriza nivel 3
		SpawnMotherShipLevel3 += DeltaTime;
		if (SpawnMotherShipLevel3 >= 120.f && SpawnMotherShipLevel3 <= 122.f)
		{
			const FVector MotherShipLocation = FVector(750.f, 0.f, 0.0f);
			const FRotator MotherShipRotation = FRotator(0.f, 0.f, 0.f);
			GetWorld()->SpawnActor<AMotherShipLevel3>(MotherShipLocation, MotherShipRotation);
			SpawnMotherShipLevel3 += 10.f;
		}
	}

	// nivel 4
	if (LevelPass->getCapsulePass() == 4)
	{
		// Sistema para la aparicion de las naves enemigas de nivel 4
		StartSpawnEnemyLevel4 += DeltaTime;
		if (StartSpawnEnemyLevel4 >= TopSpawnenemyLevel4 && countEnemyL4 != 15)
		{
			StartSpawnEnemyLevel4 = 0.f;
			float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
			const FVector SpawnLocationEL4 = FVector(850, RandomSpawnY, 0.f);	// punto de creacion de la nave
			const FRotator RotationEL4 = FRotator(0.f, 0.f, 0.f);	// rotacion de la nave

			GetWorld()->SpawnActor<AEnemyLevel4>(SpawnLocationEL4, RotationEL4);
			countEnemyL4 += 1;
		}

		// llamando a la creacion del cuarto escuadron
		SpawnSquatLevel4 += DeltaTime;
		if (SpawnSquatLevel4 >= 75.f && SpawnSquatLevel4 <= 77.f) {
			EnemyMasterChief->ConstructSquads("SquadLevel4");
			SpawnSquatLevel4 += 10;
			if (SoundAlarm != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, SoundAlarm, EnemyMasterChief->GetActorLocation());
		}

		// llamando a la nave nodriza nivel 4
		SpawnMotherShipLevel4 += DeltaTime;
		if (SpawnMotherShipLevel4 >= 140.f && SpawnMotherShipLevel4 <= 142.f)
		{
			const FVector MotherShipLocation = FVector(750.f, 0.f, 0.0f);
			const FRotator MotherShipRotation = FRotator(0.f, 0.f, 0.f);
			GetWorld()->SpawnActor<AMotherShipLevel4>(MotherShipLocation, MotherShipRotation);
			SpawnMotherShipLevel4 += 10.f;
		}
	}

	// nivel 5
	if (LevelPass->getCapsulePass() == 5)
	{
		// Sistema para la aparicion de las naves enemigas de nivel 5
		StartSpawnEnemyLevel5 += DeltaTime;
		if (StartSpawnEnemyLevel5 >= TopSpawnenemyLevel5 && countEnemyL5 != 20)
		{
			StartSpawnEnemyLevel5 = 0.f;
			float RandomSpawnY = FMath::RandRange(-370, 370);	// Un punto en el eje X
			const FVector SpawnLocationEL5 = FVector(850, RandomSpawnY, 0.f);	// punto de creacion de la nave
			const FRotator RotationEL5 = FRotator(0.f, 0.f, 0.f);	// rotacion de la nave

			GetWorld()->SpawnActor<AEnemyLevel5>(SpawnLocationEL5, RotationEL5);
			countEnemyL5 += 1;
		}

		// llamando a la creacion del quinto escuadron
		SpawnSquatLevel5 += DeltaTime;
		if (SpawnSquatLevel5 >= 90.f && SpawnSquatLevel5 <= 92.f) {
			EnemyMasterChief->ConstructSquads("SquadLevel5");
			SpawnSquatLevel5 += 10;
			if (SoundAlarm != nullptr)
				UGameplayStatics::PlaySoundAtLocation(this, SoundAlarm, EnemyMasterChief->GetActorLocation());
		}

		// llamando a la nave nodriza nivel 5
		SpawnMotherShipLevel5 += DeltaTime;
		if (SpawnMotherShipLevel5 >= 200.f && SpawnMotherShipLevel5 <= 202.f)
		{
			const FVector MotherShipLocation = FVector(750.f, 0.f, 0.0f);
			const FRotator MotherShipRotation = FRotator(0.f, 0.f, 0.f);
			GetWorld()->SpawnActor<AMotherShipLevel5>(MotherShipLocation, MotherShipRotation);
			SpawnMotherShipLevel5 += 10.f;
		}
	}
}
