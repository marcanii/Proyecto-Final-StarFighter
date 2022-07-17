
#include "PJ_BulletEnemyLevel1.h"
#include "PlayerShip.h"
#include "MyCapsule.h"
#include "EnemyShip.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
APJ_BulletEnemyLevel1::APJ_BulletEnemyLevel1()
{
	// creando la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel1.BulletEnemyLevel1'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Determinando la velociad de la bala 1
	ProjectileMovement->InitialSpeed = 500.0f;
	ProjectileMovement->MaxSpeed = 500.0f;

	// tiempo de vida de bala
	InitialLifeSpan = 4.0f;

	// configurando el campo de colision de este actor
	ProjectileCollision->SetCapsuleHalfHeight(15.0f);
	ProjectileCollision->SetCapsuleRadius(10.0f);
}

// metodo para la colision con la nave jugador y entre otros objetos
void APJ_BulletEnemyLevel1::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(10.f);
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

	AEnemyShip* EnemyShip = Cast<AEnemyShip>(OtherActor);
	if (EnemyShip)
		this->Destroy();

}
