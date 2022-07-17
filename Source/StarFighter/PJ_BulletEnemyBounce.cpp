
#include "PJ_BulletEnemyBounce.h"
#include "PlayerShip.h"

APJ_BulletEnemyBounce::APJ_BulletEnemyBounce()
{
	// creando la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyBounce.BulletEnemyBounce'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Determinando la velociad de la bala rebotante
	ProjectileMovement->InitialSpeed = 750.0f;
	ProjectileMovement->MaxSpeed = 750.0f;
	ProjectileMovement->bShouldBounce = true; // rebotar true

	// tiempo de vida de bala
	InitialLifeSpan = 4.0f;

	// configurando el campo de colision de este actor
	ProjectileCollision->SetCapsuleHalfHeight(15.0f);
	ProjectileCollision->SetCapsuleRadius(11.0f);

	// daño de la bala enemiga rebotante
	BulletDamage = 20.f;
}

void APJ_BulletEnemyBounce::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->Damage(BulletDamage);
		this->Destroy();
	}
}
