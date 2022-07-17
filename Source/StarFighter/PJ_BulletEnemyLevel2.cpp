
#include "PJ_BulletEnemyLevel2.h"
#include "PlayerShip.h"
#include "MyCapsule.h"
#include "EnemyShip.h"

APJ_BulletEnemyLevel2::APJ_BulletEnemyLevel2()
{
	// creando la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Determinando la velociad de la bala 1
	ProjectileMovement->InitialSpeed = 1300.0f;
	ProjectileMovement->MaxSpeed = 1300.0f;

	// tiempo de vida de bala
	InitialLifeSpan = 4.0f;

	// configurando el campo de colision de este actor
	ProjectileCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ProjectileCollision->SetCapsuleHalfHeight(38.0f);
	ProjectileCollision->SetCapsuleRadius(5.0f);
}

void APJ_BulletEnemyLevel2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(20.f);
		this->Destroy();
	}

	// si se choca con una capsula
	AMyCapsule* Capsule = Cast<AMyCapsule>(OtherActor);
	if (Capsule)
		this->Destroy();

	// si se choca con nuestra procias balas o las balas de enemigo
	AProjectile* Projectile = Cast<AProjectile>(OtherActor);
	if (Projectile)
		this->Destroy();
}
