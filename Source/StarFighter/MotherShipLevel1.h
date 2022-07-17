
#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "MotherShipLevel1.generated.h"


UCLASS()
class STARFIGHTER_API AMotherShipLevel1 : public AEnemyShip
{
	GENERATED_BODY()
	
public:
	// Constructor privado para evitar instancias.
	AMotherShipLevel1();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

private:
	// variables para el disparo
	FVector DistanceShoot1;
	FVector DistanceShoot2;
	FVector DistanceShoot3;
	float ShootTime;
	float TimeToSpawnShoot;

public:
	// metodo para hacer daño a esta nave
	void WeaponDamage(float Damage) override;

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
