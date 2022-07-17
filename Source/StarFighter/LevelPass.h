
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelPass.generated.h"

UCLASS()
class STARFIGHTER_API ALevelPass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelPass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// metodos accesores para el puntaje
	void setScore(int score);
	int getScore();
};
