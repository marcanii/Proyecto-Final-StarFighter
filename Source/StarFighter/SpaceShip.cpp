
#include "SpaceShip.h"

// Establece valores predeterminados Constructor
ASpaceShip::ASpaceShip()
{
 	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	//ShipMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// inicializando el campo de juego
	FieldWidth = 720.f;
	FieldHeight = 420.f;
}

// Llamado cuando comienza el juego o cuando se genera
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
	
	// tomamos la ubicacion actual de la nave jugador
	CurrentLocation = this->GetActorLocation();
}

// Llamado a cada cuadro (frame)
void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// limitando el campo de juego
	if (this->GetActorLocation().X > FieldWidth)
		CurrentLocation = FVector(FieldWidth - 1, CurrentLocation.Y, CurrentLocation.Z);
	if (this->GetActorLocation().X < -FieldWidth)
		CurrentLocation = FVector(-FieldWidth + 1, CurrentLocation.Y, CurrentLocation.Z);
	if (this->GetActorLocation().Y > FieldHeight)
		CurrentLocation = FVector(CurrentLocation.X, FieldHeight - 1, CurrentLocation.Z);
	if (this->GetActorLocation().Y < -FieldHeight)
		CurrentLocation = FVector(CurrentLocation.X, -FieldHeight + 1, CurrentLocation.Z);
}
