
#include "PaB_EnemyMasterChief.h"
#include "PaB_Squadron.h"

// Sets default values
APaB_EnemyMasterChief::APaB_EnemyMasterChief()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void APaB_EnemyMasterChief::setSquadBuilder(AActor* Builder)
{
	//Castear el actor pasado y establecer el constructor
	SquadBuilder = Cast<IPaB_SquadBuilder>(Builder);
	if (!SquadBuilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("¡Cast no válido! Consulte Registro de salida para obtener más detalles."));
		UE_LOG(LogTemp, Error, TEXT("setSquadBuilder():¡El actor no es un SquadBuilder! ¿Está seguro de que el actor implementa esa interfaz? "));
	}
}

void APaB_EnemyMasterChief::ConstructSquads(FString _SquadLevel)
{
	//Registrar si el constructor es NULL
	if (!SquadBuilder) {
		UE_LOG(LogTemp, Error, TEXT("ConstructSquads(): SquadBuilder es NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Crea las escuadras
	if (_SquadLevel == "SquadLevel1")
		SquadBuilder->buildSquadron1();

	if (_SquadLevel == "SquadLevel2")
		SquadBuilder->buildSquadron2();
	
	if (_SquadLevel == "SquadLevel3")
		SquadBuilder->buildSquadron3();
	
	if (_SquadLevel == "SquadLevel4")
		SquadBuilder->buildSquadron4();
	
	if (_SquadLevel == "SquadLevel5")
		SquadBuilder->buildSquadron5();
}
