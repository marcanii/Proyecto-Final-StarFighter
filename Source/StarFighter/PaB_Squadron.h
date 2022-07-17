
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaB_SquadMembers.h"
#include "PaB_Squadron.generated.h"

UCLASS()
class STARFIGHTER_API APaB_Squadron : public AActor, public IPaB_SquadMembers
{
	GENERATED_BODY()

public:
	// Constructor
	APaB_Squadron();

public:
	// Metodos para construir los escuadrones
	void setSquadronLevel1() override;
	void setSquadronLevel2() override;
	void setSquadronLevel3() override;
	void setSquadronLevel4() override;
	void setSquadronLevel5() override;
};
