
#pragma once

#include "CoreMinimal.h"
#include "SpaceShip.h"
#include "Components/CapsuleComponent.h"
#include "EnemyShip.generated.h"


UCLASS()
class STARFIGHTER_API AEnemyShip : public ASpaceShip
{
	GENERATED_BODY()

public:
	// Constructor
	AEnemyShip();

	// nombre de cada nave
	FString EnemyshipName;

	// Propiedades de la nave padre
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;

	// Propiedades de la nave padre
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UStaticMeshComponent* ShipMeshEnemy; // la malla o cascara
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UParticleSystem* ShipExplosionEnemy; // para la explosion
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UCapsuleComponent* ShipEnemyCollision; // para colisiones
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* ExplosionSound;	// sonido de explosion

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

	// Metodo para hacer daño a esta nave
	virtual void WeaponDamage(float Damage) {};

	// Vida de la nave
	float Life;

	// propiedad de tipo level pase para pasar el puntaje
	class ALevelPass* LevelPass;

public:
	// devuelve el nombre
	FString getEnemyShipName() { return EnemyshipName; }
};
