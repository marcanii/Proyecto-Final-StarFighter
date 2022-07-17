
#include "EnemyLevel4.h"
#include "time.h"
#include "PJ_BulletEnemyBounce.h"
#include "PJ_BulletEnemyLevel2.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyLevel4::AEnemyLevel4()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara este enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy4(TEXT("StaticMesh'/Game/Meshes/EnemyLevel4.EnemyLevel4'"));
	ShipMeshEnemy->SetStaticMesh(AssetEnemy4.Object);

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeLocation(FVector(-20.f, 3.f, 10.f));
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ShipEnemyCollision->SetCapsuleHalfHeight(55.0f);
	ShipEnemyCollision->SetCapsuleRadius(40.0f);

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 2.f;
	DistanceShoot1 = FVector(90.f, 30.f, 0.f);
	DistanceShoot2 = FVector(90.f, 0.f, 0.f);
	DistanceShoot3 = FVector(90.f, -30.f, 0.f);

	// asignandole un nombre
	EnemyshipName = "EnemyLevel4";
}

// Llamado cuando comienza el juego o cuando se genera
void AEnemyLevel4::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 12.0f;

	// vida de esta nave
	Life = 150.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AEnemyLevel4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	srand(time(NULL));
	MovementY = rand() % 7 - 4;

	if (aux) {		// si choca arriba del campo de juego este actor rebota
		if (this->GetActorLocation().Y > -400.f) {
			MoveDirection = FVector(-1.0f, MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y < -400.f) { aux = false; }
		}
	}
	else {		// si choca abajo del campo de juego este actor rebota
		if (this->GetActorLocation().Y < 400.f) {
			MoveDirection = FVector(-1.0f, -MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y > 400.f) { aux = true; }
		}
	}

	// Sistema de disparo de esta nave enemiga
	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		// direccion y ubicacion de la bala 1 de esta nave
		const FVector MoveDirectionBullet1 = FVector(-1.f, -0.25f, 0.f);
		const FRotator FireRotation1 = MoveDirectionBullet1.Rotation();
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation1.RotateVector(DistanceShoot1);
		// direccion y ubicacion de la bala 2 de esta nave
		const FVector MoveDirectionBullet2 = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation2 = MoveDirectionBullet2.Rotation();
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation2.RotateVector(DistanceShoot2);
		// direccion y ubicacion de la bala 3 de esta nave
		const FVector MoveDirectionBullet3 = FVector(-1.f, 0.25f, 0.f);
		const FRotator FireRotation3 = MoveDirectionBullet3.Rotation();
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation3.RotateVector(DistanceShoot3);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletEnemyLevel2>(SpawnLocation2, FireRotation2);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation3, FireRotation3);
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

		// este actor da 40 puntos
		LevelPass->setScore(40);
		
		this->Destroy();
	}
}

// metodo para hacer daño a esta nave
void AEnemyLevel4::WeaponDamage(float Damage)
{
	Life -= Damage;
}

// metodo para la colision de esta nave con la nave jugador
void AEnemyLevel4::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		// daño al jugador al colisionar con esta nave
		Player->Damage(80.f);
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// si te chocas con este actor te quita 40 puntos
		LevelPass->setScore(-40);

		this->Destroy();
	}
}
