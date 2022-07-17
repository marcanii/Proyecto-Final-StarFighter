
#include "PaB_BattleSquadsReady.h"
#include "PaB_Squadron.h"
#include "EnemyLevel1.h"
#include "EnemyLevel2.h"
#include "EnemyLevel3.h"
#include "EnemyLevel4.h"

// Sets default values
APaB_BattleSquadsReady::APaB_BattleSquadsReady()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaB_BattleSquadsReady::BeginPlay()
{
	Super::BeginPlay();
	
	// Engendrar los actores de escuadrones
	Squadron = GetWorld()->SpawnActor<APaB_Squadron>(APaB_Squadron::StaticClass());

	// Adjuntarlo al constructor
	Squadron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void APaB_BattleSquadsReady::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaB_BattleSquadsReady::buildSquadron1()
{
	if (!Squadron) {
		UE_LOG(LogTemp, Error, TEXT("buildSquadron1(): Squadron es NULL, asegúrese de que esté inicializado."));
		return;
	}
	// Construir escuadron de nivel 1
	Squadron->setSquadronLevel1();
}

void APaB_BattleSquadsReady::buildSquadron2()
{
	if (!Squadron) {
		UE_LOG(LogTemp, Error, TEXT("buildSquadron2(): Squadron es NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Establecer el area de la Piscina del Hospedaje
	Squadron->setSquadronLevel2();
}

void APaB_BattleSquadsReady::buildSquadron3()
{
	if (!Squadron) {
		UE_LOG(LogTemp, Error, TEXT("buildSquadron3(): Squadron es NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Establecer el area de la Piscina del Hospedaje
	Squadron->setSquadronLevel3();
}

void APaB_BattleSquadsReady::buildSquadron4()
{
	if (!Squadron) {
		UE_LOG(LogTemp, Error, TEXT("buildSquadron4(): Squadron es NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Establecer el area de la Piscina del Hospedaje
	Squadron->setSquadronLevel4();
}

void APaB_BattleSquadsReady::buildSquadron5()
{
	if (!Squadron) {
		UE_LOG(LogTemp, Error, TEXT("buildSquadron5(): Squadron es NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Establecer el area de la Piscina del Hospedaje
	Squadron->setSquadronLevel5();
}
