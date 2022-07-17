
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PJ_BulletLevel2.generated.h"


UCLASS()
class STARFIGHTER_API APJ_BulletLevel2 : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Constructor
	APJ_BulletLevel2();

	// metodo para la colision entre esta bala y las nave enemigas
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
