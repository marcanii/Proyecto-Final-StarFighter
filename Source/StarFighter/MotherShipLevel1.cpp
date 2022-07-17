
#include "MotherShipLevel1.h"
#include "Kismet/GameplayStatics.h"
#include "PJ_BulletEnemyLevel1.h"
#include "PlayerShip.h"
#include "C_CapsulePass.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AMotherShipLevel1::AMotherShipLevel1()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara esta nave nodriza
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetNodriza1(TEXT("StaticMesh'/Game/Meshes/Nodriza1.Nodriza1'"));
	ShipMeshEnemy->SetStaticMesh(AssetNodriza1.Object);

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudioNodriza(TEXT("SoundWave'/Game/Sound/ExplosionNodriza.ExplosionNodriza'"));
	ExplosionSound = ExplosionAudioNodriza.Object;

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeRotation(FRotator(0.0f, 0.f, 90.0f));
	ShipEnemyCollision->SetCapsuleHalfHeight(250.0f);
	ShipEnemyCollision->SetCapsuleRadius(105.0f);

	// asignandole el nombre
	EnemyshipName = "MotherShipLevel1";

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 2.f;
	DistanceShoot1 = FVector(180.f, 60.f, 0.f);
	DistanceShoot2 = FVector(130.f, 0.f, 0.f);
	DistanceShoot3 = FVector(180.f, -60.f, 0.f);
}

// Llamado cuando comienza el juego o cuando se genera
void AMotherShipLevel1::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 15.0f;

	// vida de esta nave
	Life = 300.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AMotherShipLevel1::Tick(float DeltaTime)
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
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation2, FireRotation2);
			World->SpawnActor<APJ_BulletEnemyLevel1>(SpawnLocation3, FireRotation3);
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

		// este actor da 100puntos
		LevelPass->setScore(100);

		this->Destroy();
	}
}

// daño de las balas del jugador a esta nave nodriza
void AMotherShipLevel1::WeaponDamage(float Damage)
{
	Life -= Damage;
}

// si esta nave nodiza colisiona con el jugador
void AMotherShipLevel1::NotifyActorBeginOverlap(AActor* OtherActor)
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
		// si te chocas con este actor te quita 100 puntos
		LevelPass->setScore(-100);
		this->Destroy();
	}
}
