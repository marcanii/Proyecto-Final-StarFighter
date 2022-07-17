
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PJ_BulletEnemyBounce.generated.h"


UCLASS()
class STARFIGHTER_API APJ_BulletEnemyBounce : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Constructor
	APJ_BulletEnemyBounce();

	// metodo para la colision con la nave jugador y entre otros objetos
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
