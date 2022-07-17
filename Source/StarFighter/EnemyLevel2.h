
#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "EnemyLevel2.generated.h"


UCLASS()
class STARFIGHTER_API AEnemyLevel2 : public AEnemyShip
{
	GENERATED_BODY()
	
public:
	// Constructor
	AEnemyLevel2();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

private:
	// variables para el disparo de esta nave
	float TimeToSpawnShoot;
	float ShootTime;
	FVector DistanceShootEnemy;

public:
	// metodo para hacer daño a esta nave
	void WeaponDamage(float Damage) override;

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
