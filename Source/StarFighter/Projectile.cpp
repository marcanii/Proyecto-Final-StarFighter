
#include "Projectile.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AProjectile::AProjectile()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// creando el mesh del proyectil
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	//ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = ProjectileMesh;

	// Controlando el movimiento del proyectil
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 0.f; // velocidad por defecto
	ProjectileMovement->MaxSpeed = 0.f; // max velocidad por defecto
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false; // rebotar falso
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	ProjectileCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Ship Collision"));
	ProjectileCollision->AttachToComponent(ProjectileMesh, FAttachmentTransformRules::KeepRelativeTransform);
	
	// Muere después de 3 segundos por defecto
	InitialLifeSpan = 3.f;

	// Daño del proyectil predeterminado
	BulletDamage = 0.f;
}