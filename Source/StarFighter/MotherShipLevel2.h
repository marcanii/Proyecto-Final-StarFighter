
#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "MotherShipLevel2.generated.h"


UCLASS()
class STARFIGHTER_API AMotherShipLevel2 : public AEnemyShip
{
	GENERATED_BODY()
	
public:
	// Constructor privado para evitar instancias.
	AMotherShipLevel2();

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
	FVector DistanceShoot4;
	FVector DistanceShoot5;
	float ShootTime;
	float TimeToSpawnShoot;

	// variables para el movimiento
	float MovementY;
	bool aux = true;
	FVector MoveDirection;
	FVector Movement;
	FRotator NewRotation;

public:
	// metodo para hacer daño a esta nave
	void WeaponDamage(float Damage) override;

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
