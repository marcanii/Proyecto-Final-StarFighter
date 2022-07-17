
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Asteroids.generated.h"

UCLASS()
class STARFIGHTER_API AAsteroids : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	AAsteroids();

	// Propiedades del asteroide
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;	// componente ruta
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UStaticMeshComponent* MeshAsteroid;	// mesh del asteroide
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* SoundDestroy;	// sonido al destruirse
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UCapsuleComponent* AsteroidCollision; // para colisiones
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UParticleSystem* AsteroidExplosion; // para la explosion

	class ALevelPass* LevelPass;

private:
	float Life;
	float Velocity;
	int ValueScore;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

	// metodo para hacer daño a este actor
	void WeaponDamage(float Damage);

	// metodo para la colision de esta nave con la nave jugador
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
