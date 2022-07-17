// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "MyCapsule.generated.h"

UCLASS()
class STARFIGHTER_API AMyCapsule : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	AMyCapsule();

	// componente root
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;

	// Malla de la clase Mi capsula
	UPROPERTY(EditAnywhere, Category = "Componentes Capsula")
		class UStaticMeshComponent* CapsuleMesh;
	UPROPERTY(EditAnywhere, Category = "Componentes Capsula")
		class UCapsuleComponent* CapsuleCollision; // para colisiones
	UPROPERTY(EditAnywhere, Category = "Componentes Capsula")
		class USoundBase* SoundEat;

	// nombre de la capsula
	FString NameCapsule;

	// velocidad de la capsula
	float VelocityCapsule;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

	void TakeCapsule();

	// metodo para delvolver el nombre de la capsula
	FORCEINLINE FString getNameCapsule() const { return NameCapsule; }
};
