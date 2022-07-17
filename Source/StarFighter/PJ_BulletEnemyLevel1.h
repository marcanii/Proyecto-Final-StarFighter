
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PJ_BulletEnemyLevel1.generated.h"


UCLASS()
class STARFIGHTER_API APJ_BulletEnemyLevel1 : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Constructor
	APJ_BulletEnemyLevel1();

	// metodo para la colision con la nave jugador y entre otros objetos
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
