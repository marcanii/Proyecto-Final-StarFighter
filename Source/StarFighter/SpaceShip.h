
#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/Pawn.h"
#include "SpaceShip.generated.h"

UCLASS()
class STARFIGHTER_API ASpaceShip : public APawn
{
	GENERATED_BODY()

public:
	// Constructor
	ASpaceShip();

	// propiedades para la nave...
	UPROPERTY(EditAnywhere, Category = "Campo de Juego")
		float FieldWidth; // ancho del campo
	UPROPERTY(EditAnywhere, Category = "Campo de Juego")
		float FieldHeight; // altura del campo
	UPROPERTY(EditAnywhere, Category = "Velocidad Nave")
		float Velocity; // velocidad de la nave

	FVector CurrentLocation; // para la ubicacion actual
	FVector NewLocation; // para la nueva ubicacion

	// velocidad actual en X y Y de la nave
	float Current_X_Velocity = 0.0f;
	float Current_Y_Velocity = 0.0f;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;
};
