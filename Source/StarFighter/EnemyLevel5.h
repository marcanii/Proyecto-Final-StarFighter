
#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "EnemyLevel5.generated.h"


UCLASS()
class STARFIGHTER_API AEnemyLevel5 : public AEnemyShip
{
	GENERATED_BODY()

public:
	// Constructor
	AEnemyLevel5();

	// variables para el mesh normal e invisible
	UStaticMesh* MeshInvisible;
	UStaticMesh* MeshNormal;

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

	// variables para el movimiento de este actor
	float MovementY;
	bool aux = true;
	FVector MoveDirection;
	FVector Movement;
	FRotator NewRotation;
	
	// variables para hacer invisible
	float InvisibleTime;
	float TopInvisibleTime;
	bool VarInvisible;

public:
	// metodo para hacer daño a esta nave
	void WeaponDamage(float Damage) override;

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
