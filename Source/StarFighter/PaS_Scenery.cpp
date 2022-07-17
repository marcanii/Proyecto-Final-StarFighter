// Fill out your copyright notice in the Description page of Project Settings.


#include "PaS_Scenery.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
APaS_Scenery::APaS_Scenery()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando la malla del escenario
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetsScenery(TEXT("StaticMesh'/Game/Meshes/Scenery.Scenery'"));
	SceneryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scenery Mesh"));
	RootComponent = SceneryMesh;
	SceneryMesh->SetStaticMesh(AssetsScenery.Object);

	// creando el campo de estrellas del escenario
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetsStarField(TEXT("StaticMesh'/Game/Meshes/StarField.StarField'"));
	//StarFieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//SceneryMesh->SetStaticMesh(AssetsStarField.Object);

}

// Llamado cuando comienza el juego o cuando se genera
void APaS_Scenery::BeginPlay()
{
	Super::BeginPlay();
	
}

// Llamado a cada cuadro (frame)
void APaS_Scenery::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

