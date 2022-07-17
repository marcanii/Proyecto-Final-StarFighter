
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pass.generated.h"


UCLASS()
class STARFIGHTER_API APass : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// metodos accesores para el nivel
	void setCapsulePass(int Level);
	int getCapsulePass();

};
