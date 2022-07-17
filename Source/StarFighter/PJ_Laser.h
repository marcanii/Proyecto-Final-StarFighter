
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PJ_Laser.generated.h"


UCLASS()
class STARFIGHTER_API APJ_Laser : public AProjectile
{
	GENERATED_BODY()
	
public:
	// Constructor
	APJ_Laser();

	// metodo para la colision entre esta bala y las nave enemigas
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
