
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PJ_Missile.generated.h"


UCLASS()
class STARFIGHTER_API APJ_Missile : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Constructor
	APJ_Missile();

	// metodo para la colision entre esta bala y las nave enemigas
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
