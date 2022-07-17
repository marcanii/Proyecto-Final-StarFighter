
#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "EnemyLevel1.generated.h"


UCLASS()
class STARFIGHTER_API AEnemyLevel1 : public AEnemyShip
{
	GENERATED_BODY()
	
public:
	// Constructor
	AEnemyLevel1();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

	// metodo para hacer daño a esta nave
	void WeaponDamage(float Damage) override;

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
