
#include "LevelPass.h"

static int Score = 0;

// Sets default values
ALevelPass::ALevelPass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// puntaje sera igual al puntaje anterior
	Score = Score;
}

// Called when the game starts or when spawned
void ALevelPass::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALevelPass::setScore(int score)
{
	Score += score;
}

int ALevelPass::getScore()
{
	return Score;
}



