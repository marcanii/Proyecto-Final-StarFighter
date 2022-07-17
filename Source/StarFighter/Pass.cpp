
#include "Pass.h"

static int NumberLevel;

// Called when the game starts or when spawned
void APass::BeginPlay()
{
	Super::BeginPlay();
	// numero de nivel
	NumberLevel = 1;
}

void APass::setCapsulePass(int Level)
{
	NumberLevel += Level;
}

int APass::getCapsulePass()
{
	return NumberLevel;
}

