
#include "Asteroids.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AAsteroids::AAsteroids()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// Llamano al componente ruta
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// creando la apariencia del asteroide
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetAsteroid(TEXT("StaticMesh'/Game/Meshes/SM_Rock.SM_Rock'"));
	MeshAsteroid = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Asteroid"));
	MeshAsteroid->SetStaticMesh(AssetAsteroid.Object);
	
	// creando el campo de colision del asteroide
	AsteroidCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Asteroid"));
	// configurando el campo de colision de este actor
	AsteroidCollision->SetRelativeLocation(FVector(-5.f, 0.f, 55.f));
	AsteroidCollision->SetCapsuleHalfHeight(85.0f);
	AsteroidCollision->SetCapsuleRadius(65.0f);

	// creamos el efecto de explosion
	static ConstructorHelpers::FObjectFinder<UParticleSystem> AssetExplosion(TEXT("ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'"));
	AsteroidExplosion = CreateDefaultSubobject<UParticleSystem>(TEXT("Explosion"));
	AsteroidExplosion = AssetExplosion.Object;

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudio(TEXT("SoundWave'/Game/Sound/Explosion02.Explosion02'"));
	SoundDestroy = ExplosionAudio.Object;

	// atachando al comoponente root
	MeshAsteroid->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	AsteroidCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Llamado cuando comienza el juego o cuando se genera
void AAsteroids::BeginPlay()
{
	Super::BeginPlay();
	
	// vida del asteroide
	Life = 100.f;

	// velocidad del asteroide
	Velocity = 40.f;

	// puntos que da este acto
	ValueScore = 30;

	// actor para pasar el puntaje
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AAsteroids::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	const FVector MoveDirection = FVector(-1.f, 0.f, 0.f);		// direccion del movimiento
	const FVector Movement = MoveDirection * Velocity * DeltaTime;	// la velocidad en la que se va mover

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(0.0f, -90.0f, 0.0f); // la rotacion de la nave enemiga

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	// destruir la nave enemiga si sobrepasa el punto 850 en el eje de las X o si ya no tiene vida
	if (this->GetActorLocation().X < -950.f || Life <= 0.f) {
		// efecto de la explosion
		if (AsteroidExplosion)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), AsteroidExplosion, GetActorTransform());
		// sonido de la explosion
		if (SoundDestroy != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, SoundDestroy, GetActorLocation());
		// pasando el puntaje que da este actor
		LevelPass->setScore(50);
		
		this->Destroy();
	}
}

void AAsteroids::WeaponDamage(float Damage)
{
	Life -= Damage;
}

void AAsteroids::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(80.f);
		// efecto de la explosion
		if (AsteroidExplosion)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), AsteroidExplosion, GetActorTransform());
		// sonido de la explosion
		if (SoundDestroy != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, SoundDestroy, GetActorLocation());
		// pasando el puntaje si choca con el jugador
		LevelPass->setScore(-50);
		this->Destroy();
	}
}

