
#include "MotherShipLevel4.h"
#include "PlayerShip.h"
#include "PJ_BulletEnemyBounce.h"
#include "time.h"
#include "EnemyLevel4.h"
#include "Kismet/GameplayStatics.h"
#include "C_CapsulePass.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AMotherShipLevel4::AMotherShipLevel4()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara esta nave nodriza
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetNodriza4(TEXT("StaticMesh'/Game/Meshes/Nodriza4.Nodriza4'"));
	ShipMeshEnemy->SetStaticMesh(AssetNodriza4.Object);

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudioNodriza(TEXT("SoundWave'/Game/Sound/ExplosionNodriza.ExplosionNodriza'"));
	ExplosionSound = ExplosionAudioNodriza.Object;

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.0f));
	ShipEnemyCollision->SetCapsuleHalfHeight(280.0f);
	ShipEnemyCollision->SetCapsuleRadius(150.0f);

	// asignandole el nombre
	EnemyshipName = "MotherShipLevel4";

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 10.f;
	DistanceShoot1 = FVector(100.f, 150.f, 0.f);
	DistanceShoot2 = FVector(100.f, 75.f, 0.f);
	DistanceShoot3 = FVector(200.f, 0.f, 0.f);
	DistanceShoot4 = FVector(100.f, -75.f, 0.f);
	DistanceShoot5 = FVector(100.f, -150.f, 0.f);

	// variables para engendrar hijos
	SpawnTime = 0.f;
	TimeToSpawnShip = 4.f;
	SonShipSpawn1 = FVector(-200.f, 350.f, 0.f);
	SonShipSpawn2 = FVector(-350.f, 150.f, 0.f);
	SonShipSpawn3 = FVector(-350.f, -150.f, 0.f);
	SonShipSpawn4 = FVector(-200.f, -350.f, 0.f);
}

// Llamado cuando comienza el juego o cuando se genera
void AMotherShipLevel4::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 1.0f;

	// vida de esta nave
	Life = 700.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AMotherShipLevel4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Haciendo mover la nave enemiga
	srand(time(NULL));
	MovementY = rand() % 5 - 1;

	if (aux) {		// si choca abajo del campo de juego este actor rebota
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
	else {		// si choca arriba del campo de juego este actor rebota
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
		const FVector MoveDirectionBullet1 = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation = MoveDirectionBullet1.Rotation();

		const FVector SpawnLocation1 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot1);
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot2);
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot3);
		const FVector SpawnLocation4 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot4);
		const FVector SpawnLocation5 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot5);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation1, FireRotation);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation2, FireRotation);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation3, FireRotation);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation4, FireRotation);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation5, FireRotation);
		}
	}

	// sistema para engendra naves hijas enemigas
	SpawnTime += DeltaTime;
	if (SpawnTime >= TimeToSpawnShip)
	{
		SpawnTime = 0.f;
		const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

		const FVector SpawnLocationShip1 = GetActorLocation() + Rotation.RotateVector(SonShipSpawn1);
		const FVector SpawnLocationShip2 = GetActorLocation() + Rotation.RotateVector(SonShipSpawn2);
		const FVector SpawnLocationShip3 = GetActorLocation() + Rotation.RotateVector(SonShipSpawn3);
		const FVector SpawnLocationShip4 = GetActorLocation() + Rotation.RotateVector(SonShipSpawn4);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<AEnemyLevel4>(SpawnLocationShip1, Rotation);
			World->SpawnActor<AEnemyLevel4>(SpawnLocationShip2, Rotation);
			World->SpawnActor<AEnemyLevel4>(SpawnLocationShip3, Rotation);
			World->SpawnActor<AEnemyLevel4>(SpawnLocationShip4, Rotation);
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

		// este actor da 400puntos
		LevelPass->setScore(400);

		this->Destroy();
	}
}

// daño de las balas del jugador a esta nave nodriza
void AMotherShipLevel4::WeaponDamage(float Damage)
{
	Life -= Damage;
}

// si esta nave nodiza colisiona con el jugador
void AMotherShipLevel4::NotifyActorBeginOverlap(AActor* OtherActor)
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
		// si te chocas con este actor te quita 400 puntos
		LevelPass->setScore(-400);
		this->Destroy();
	}
}
