
#include "EnemyLevel3.h"
#include "PJ_BulletEnemyLevel1.h"
#include "Kismet/GameplayStatics.h"
#include "time.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyLevel3::AEnemyLevel3()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara este enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy3(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
	ShipMeshEnemy->SetStaticMesh(AssetEnemy3.Object);

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeLocation(FVector(-5.f, 0.f, 10.f));
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ShipEnemyCollision->SetCapsuleHalfHeight(66.0f);
	ShipEnemyCollision->SetCapsuleRadius(43.0f);

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 2.f;
	DistanceShoot1 = FVector(65.f, 35.f, 0.f);
	DistanceShoot2 = FVector(65.f, -35.f, 0.f);

	// asignadole un nombre
	EnemyshipName = "EnemyLevel3";
}

void AEnemyLevel3::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 20.0f;

	// vida de esta nave
	Life = 80.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

void AEnemyLevel3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	srand(time(NULL));
	MovementY = rand() % 5 - 1;

	if (aux) {		// si choca abajo del campo de juego este actor rebota
		if (this->GetActorLocation().Y < 400.f) {
			MoveDirection = FVector(-1.0f, MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y > 400.f) { aux = false; }
		}
	}
	else {		// si choca arriba del campo de juego este actor rebota
		if (this->GetActorLocation().Y > -400.f) {
			MoveDirection = FVector(-1.0f, -MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y < -400.f) { aux = true; }
		}
	}

	// Sistema de disparo de esta nave enemiga
	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		// ubicacion direccion de la bala 1 de este actor
		const FVector MoveDirectionBullet1 = FVector(-1.f, -0.02f, 0.f);
		const FRotator FireRotation1 = MoveDirectionBullet1.Rotation();
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation1.RotateVector(DistanceShoot1);
		// ubicacion direccion de la bala 2 de este actor
		const FVector MoveDirectionBullet2 = FVector(-1.f, 0.02f, 0.f);
		const FRotator FireRotation2 = MoveDirectionBullet2.Rotation();
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation2.RotateVector(DistanceShoot2);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation2, FireRotation2);
		}
	}

	// destruir la nave enemiga si sobrepasa el punto 850 en el eje de las X o si ya no tiene vida
	if (this->GetActorLocation().X < -950.f || Life <= 0.f) {
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// este actor da 30 puntos
		LevelPass->setScore(30);

		this->Destroy();
	}
}

void AEnemyLevel3::WeaponDamage(float Damage)
{
	Life -= Damage;
}

void AEnemyLevel3::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(60.f);
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// si te chocas con este actor te quita 30 puntos
		LevelPass->setScore(-30);

		this->Destroy();
	}
}
