
#include "MotherShipLevel2.h"
#include "PlayerShip.h"
#include "PJ_BulletEnemyBounce.h"
#include "Kismet/GameplayStatics.h"
#include "time.h"
#include "C_CapsulePass.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AMotherShipLevel2::AMotherShipLevel2()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara esta nave nodriza
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetNodriza2(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	ShipMeshEnemy->SetStaticMesh(AssetNodriza2.Object);

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudioNodriza(TEXT("SoundWave'/Game/Sound/ExplosionNodriza.ExplosionNodriza'"));
	ExplosionSound = ExplosionAudioNodriza.Object;

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.0f));
	ShipEnemyCollision->SetCapsuleHalfHeight(250.0f);
	ShipEnemyCollision->SetCapsuleRadius(150.0f);

	// asignandole el nombre
	EnemyshipName = "MotherShipLevel2";

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 3.f;
	DistanceShoot1 = FVector(100.f, 50.f, 0.f);
	DistanceShoot2 = FVector(100.f, 25.f, 0.f);
	DistanceShoot3 = FVector(300.f, 0.f, 0.f);
	DistanceShoot4 = FVector(100.f, -25.f, 0.f);
	DistanceShoot5 = FVector(100.f, -50.f, 0.f);
}

// Llamado cuando comienza el juego o cuando se genera
void AMotherShipLevel2::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 3.0f;

	// vida de esta nave
	Life = 400.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AMotherShipLevel2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	srand(time(NULL));
	MovementY = rand() % 7 - 5;

	if (aux) {		// si choca abajo del campo de juego este actor rebota   < 400  y > 400
		if (this->GetActorLocation().Y > -320.f) {
			MoveDirection = FVector(-1.0f, MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y < -320.f) { aux = false; }
		}
	}
	else {		// si choca arriba del campo de juego este actor rebota > -400  y < -400
		if (this->GetActorLocation().Y < 320.f) {
			MoveDirection = FVector(-1.0f, -MovementY, 0.0f);
			Movement = MoveDirection * Velocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y > 320.f) { aux = true; }
		}
	}

	// sistema de disparo
	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet1 = FVector(-1.f, -0.25f, 0.f);
		const FRotator FireRotation1 = MoveDirectionBullet1.Rotation();
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation1.RotateVector(DistanceShoot1);

		const FVector MoveDirectionBullet2 = FVector(-1.f, -0.18f, 0.f);
		const FRotator FireRotation2 = MoveDirectionBullet2.Rotation();
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation2.RotateVector(DistanceShoot2);

		const FVector MoveDirectionBullet3 = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation3 = MoveDirectionBullet3.Rotation();
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation3.RotateVector(DistanceShoot3);

		const FVector MoveDirectionBullet4 = FVector(-1.f, 0.18f, 0.f);
		const FRotator FireRotation4 = MoveDirectionBullet4.Rotation();
		const FVector SpawnLocation4 = GetActorLocation() + FireRotation4.RotateVector(DistanceShoot4);

		const FVector MoveDirectionBullet5 = FVector(-1.f, 0.25f, 0.f);
		const FRotator FireRotation5 = MoveDirectionBullet5.Rotation();
		const FVector SpawnLocation5 = GetActorLocation() + FireRotation5.RotateVector(DistanceShoot5);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation2, FireRotation2);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation3, FireRotation3);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation4, FireRotation4);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation5, FireRotation5);
		}
	}

	// destruir la nave enemiga si ya no tiene vida
	if (Life <= 0.f) {
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		const FVector LocationCapsule = this->GetActorLocation();
		const FRotator RotationCapsule = FRotator(0.f, 0.f, 0.f);
		GetWorld()->SpawnActor<AC_CapsulePass>(LocationCapsule, RotationCapsule);

		// este actor da 200puntos
		LevelPass->setScore(200);

		this->Destroy();
	}
}

// daño de las balas del jugador a esta nave nodriza
void AMotherShipLevel2::WeaponDamage(float Damage)
{
	Life -= Damage;
}

// si esta nave nodiza colisiona con el jugador
void AMotherShipLevel2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		// si te chocas con la mdre nodriza pierdes el juego
		Player->DestroyAndExplosion();
		Player->setLife(0);
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr && this->GetActorLocation().X > -850.f)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());
		// si te chocas con este actor te quita 200 puntos
		LevelPass->setScore(-200);
		this->Destroy();
	}
}
