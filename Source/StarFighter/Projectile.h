
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Projectile.generated.h"

UCLASS()
class STARFIGHTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	AProjectile();

	// propiedades de proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
		class UStaticMeshComponent* ProjectileMesh; // malla
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
		class UProjectileMovementComponent* ProjectileMovement; // movimiento
	UPROPERTY(EditAnywhere, Category = "Projectile")
		class UCapsuleComponent* ProjectileCollision; // para colisiones 

protected:
	// Daño del proyectil
	float BulletDamage;
};
