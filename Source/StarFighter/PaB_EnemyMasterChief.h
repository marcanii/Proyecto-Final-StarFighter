
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaB_SquadBuilder.h"
#include "PaB_EnemyMasterChief.generated.h"

UCLASS()
class STARFIGHTER_API APaB_EnemyMasterChief : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaB_EnemyMasterChief();

private:
	IPaB_SquadBuilder* SquadBuilder;

public:	

	// Crea los escuadrones
	void ConstructSquads(FString _SquadLevel);

	// Establecer el actor constructor
	void setSquadBuilder(AActor* Builder);

};
