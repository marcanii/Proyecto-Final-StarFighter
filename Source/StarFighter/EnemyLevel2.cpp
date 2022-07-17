
#include "EnemyLevel2.h"
#include "PJ_BulletEnemyLevel1.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyLevel2::AEnemyLevel2()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara este enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy2(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	ShipMeshEnemy->SetStaticMesh(AssetEnemy2.Object);

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeLocation(FVector(0.f, 15.f, 0.f));
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ShipEnemyCollision->SetCapsuleHalfHeight(78.0f);
	ShipEnemyCollision->SetCapsuleRadius(39.0f);

	// Distancia de disparo
	DistanceShootEnemy = FVector(90.f, 0.f, 0.f);
	TimeToSpawnShoot = 4.f;
	ShootTime = 0;

	// asignadole un nombre 
	EnemyshipName = "EnemyLevel2";
}

// Llamado cuando comienza el juego o cuando se genera
void AEnemyLevel2::BeginPlay()
{
	Super::BeginPlay();

	// Velocidad de esta nave
	Velocity = 40.0f;

	// vida de esta nave
	Life = 40.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AEnemyLevel2::Tick(float DeltaTime)
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

	// Sistema de disparo de esta nave enemiga
	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation = MoveDirectionBullet.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(DistanceShootEnemy);

		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation, FireRotation);
	}

	// destruir la nave enemiga si sobrepasa el punto 850 en el eje de las X o si ya no tiene vida
	if (this->GetActorLocation().X < -950.f || Life <= 0.f) {
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// este actor da 20 puntos
		LevelPass->setScore(20);

		this->Destroy();
	}
}

void AEnemyLevel2::WeaponDamage(float Damage)
{
	Life -= Damage;
}

void AEnemyLevel2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(40.f);
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());
		// si te chocas con este actor te quita 20 puntos
		LevelPass->setScore(-20);
		this->Destroy();
	}
}
