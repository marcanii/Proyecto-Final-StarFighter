
#include "MyCapsule.h"
#include "Kismet/GameplayStatics.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AMyCapsule::AMyCapsule()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Llamano al componente ruta
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Weapon.Weapon'"));
	CapsuleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Capsula"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> EatAudio(TEXT("SoundWave'/Game/Sound/ComerCapsula.ComerCapsula'"));
	SoundEat = EatAudio.Object;

	// configurando el campo de colision de este actor
	CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Enemy"));
	CapsuleCollision->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	CapsuleCollision->SetCapsuleHalfHeight(35.0f);
	CapsuleCollision->SetCapsuleRadius(17.0f);

	// atachando al comoponente root
	CapsuleMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	CapsuleCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Llamado cuando comienza el juego o cuando se genera
void AMyCapsule::BeginPlay()
{
	Super::BeginPlay();
	
	// velocidad predeterminada
	VelocityCapsule = 40.f;
}

// Llamado a cada cuadro (frame)
void AMyCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector MoveDirection = FVector(0.f, 1.f, 0.f);		// direccion del movimiento
	const FVector Movement = MoveDirection * VelocityCapsule * DeltaTime;	// la velocidad en la que se va mover

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f); // la rotacion de la capsula

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	// destruir la capsula si sobrepasa el punto 390 en el eje de las Y
	if (this->GetActorLocation().Y > 390.f) {
		this->Destroy();
	}
}

void AMyCapsule::TakeCapsule()
{
	if (CapsuleMesh) {
		// sonido de cargar
		if (SoundEat != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundEat, GetActorLocation());

		this->Destroy();
	}
}
