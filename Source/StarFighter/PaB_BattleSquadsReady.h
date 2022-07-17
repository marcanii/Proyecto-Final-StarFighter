
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaB_SquadBuilder.h"
#include "PaB_BattleSquadsReady.generated.h"

UCLASS()
class STARFIGHTER_API APaB_BattleSquadsReady : public AActor, public IPaB_SquadBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaB_BattleSquadsReady();

private:
	class APaB_Squadron* Squadron;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void buildSquadron1() override;
	virtual void buildSquadron2() override;
	virtual void buildSquadron3() override;
	virtual void buildSquadron4() override;
	virtual void buildSquadron5() override;
};
