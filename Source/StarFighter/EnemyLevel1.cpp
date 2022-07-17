
#include "EnemyLevel1.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyLevel1::AEnemyLevel1()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara este enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy1(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	ShipMeshEnemy->SetStaticMesh(AssetEnemy1.Object);

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetCapsuleHalfHeight(28.0f);
	ShipEnemyCollision->SetCapsuleRadius(28.0f);

	// asignandole el nombre
	EnemyshipName = "EnemyLevel1";
}

// Llamado cuando comienza el juego o cuando se genera
void AEnemyLevel1::BeginPlay()
{
	Super::BeginPlay();

	// Velocidad de la nave
	Velocity = 50.0f;

	// Vida de esta nave
	Life = 20;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AEnemyLevel1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	const FVector MoveDirection = FVector(-1.f, 0.f, 0.f);		// direccion del movimiento
	const FVector Movement = MoveDirection * Velocity * DeltaTime;	// la velocidad en la que se va mover

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(180.0f, 0.0f, 180.0f); // la rotacion de la nave enemiga

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	// destruir la nave enemiga si sobrepasa el punto 850 en el eje de las X o si ya no tiene vida
	if (this->GetActorLocation().X < -950.f || Life <= 0.f) {
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// este actor da 10puntos
		LevelPass->setScore(10);

		this->Destroy();
	}
}

void AEnemyLevel1::WeaponDamage(float Damage)
{
	Life -= Damage;
}

void AEnemyLevel1::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(20.f);
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());
		// si te chocas con este actor te quita 10 puntos
		LevelPass->setScore(-10);
		this->Destroy();
	}
}
