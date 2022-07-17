
#include "EnemyLevel5.h"
#include "time.h"
#include "PJ_BulletEnemyBounce.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerShip.h"
#include "LevelPass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AEnemyLevel5::AEnemyLevel5()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando las propiedades
	// Establecemos el mesh que llevara este enemigo
	ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy5(TEXT("StaticMesh'/Game/Meshes/EnemyLevel5.EnemyLevel5'"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> AssetEnemy5Invisible(TEXT("StaticMesh'/Game/Meshes/EnemyInvisible.EnemyInvisible'"));
	
	MeshInvisible = AssetEnemy5Invisible.Object;
	MeshNormal = AssetEnemy5.Object;
	
	ShipMeshEnemy->SetStaticMesh(MeshNormal);

	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeLocation(FVector(-3.f, 0.f, 5.f));
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ShipEnemyCollision->SetCapsuleHalfHeight(60.0f);
	ShipEnemyCollision->SetCapsuleRadius(60.0f);

	// variables para el disparo
	ShootTime = 0.f;
	TimeToSpawnShoot = 2.f;
	DistanceShoot1 = FVector(65.f, 35.f, 0.f);
	DistanceShoot2 = FVector(65.f, -35.f, 0.f);

	// asignandole un nombre
	EnemyshipName = "EnemyLevel5";

	// valores de las variables invisile
	InvisibleTime = 0.f;
	TopInvisibleTime = 10.f;
	VarInvisible = true;
}

// Llamado cuando comienza el juego o cuando se genera
void AEnemyLevel5::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de esta nave
	Velocity = 10.0f;

	// vida de esta nave
	Life = 200.f;

	// creamos un actor estatico para pasar los puntos
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());
}

// Llamado a cada cuadro (frame)
void AEnemyLevel5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// sistema para hacer invisible a esta nave
	InvisibleTime += DeltaTime;
	if (InvisibleTime >= TopInvisibleTime)
	{
		InvisibleTime = 0.f;
		if (VarInvisible) {
			ShipMeshEnemy->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			ShipMeshEnemy->SetStaticMesh(MeshInvisible);
			ShipEnemyCollision->SetCapsuleRadius(0.01f);
			VarInvisible = false;
		}
		else {
			ShipMeshEnemy->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			ShipMeshEnemy->SetStaticMesh(MeshNormal);
			ShipEnemyCollision->SetCapsuleRadius(60.0f);
			VarInvisible = true;
		}	
	}

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
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletEnemyBounce>(SpawnLocation2, FireRotation2);
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

		// este actor da 50 puntos
		LevelPass->setScore(50);

		this->Destroy();
	}
}

// metodo para hacer daño a esta nave
void AEnemyLevel5::WeaponDamage(float Damage)
{
	Life -= Damage;
}

// metodo para la colision de esta nave con la nave jugador, daño
void AEnemyLevel5::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());

	// verificamos que se la nave jugador
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(100.f);
		// efecto de la explosion
		if (ShipExplosionEnemy)
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
		// sonido de la explosion
		if (ExplosionSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, ExplosionSound, GetActorLocation());

		// si te chocas con este actor te quita 50 puntos
		LevelPass->setScore(-50);

		this->Destroy();
	}
}
