
#include "EnemyShip.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyShip::AEnemyShip()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// Llamano al componente ruta
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// creando la malla de la nava enemiga
	ShipMeshEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh Enemy"));

	// creando el campo de colision de la nave
	ShipEnemyCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Enemy"));

	// creamos el efecto de explosion
	static ConstructorHelpers::FObjectFinder<UParticleSystem> AssetExplosion(TEXT("ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'"));
	ShipExplosionEnemy = CreateDefaultSubobject<UParticleSystem>(TEXT("Explosion"));
	ShipExplosionEnemy = AssetExplosion.Object;

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudio(TEXT("SoundWave'/Game/Sound/Explosion02.Explosion02'"));
	ExplosionSound = ExplosionAudio.Object;

	// atachando al comoponente root
	ShipMeshEnemy->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipEnemyCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Llamado cuando comienza el juego o cuando se genera
void AEnemyShip::BeginPlay()
{
	Super::BeginPlay();

	// Estableciendo la velocidad predeterminada de las naves enemigas
	Velocity = 0.0f;
}
