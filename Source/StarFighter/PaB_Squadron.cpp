
#include "PaB_Squadron.h"
#include "EnemyLevel1.h"
#include "EnemyLevel2.h"
#include "EnemyLevel3.h"
#include "EnemyLevel4.h"
#include "EnemyLevel5.h"

// Sets default values
APaB_Squadron::APaB_Squadron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Estableciendo el escuadron de nivel 1...
void APaB_Squadron::setSquadronLevel1()
{
	// Integrantes del escuadron 1
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	// Segunda fila
	const FVector Location1 = FVector(750.f, -250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location1, Rotation);

	const FVector Location2 = FVector(750.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location2, Rotation);

	const FVector Location3 = FVector(750.f, -110.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location3, Rotation);

	const FVector Location4 = FVector(750.f, -40.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location4, Rotation);

	const FVector Location5 = FVector(750.f, 30.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location5, Rotation);

	const FVector Location6 = FVector(750.f, 100.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location6, Rotation);

	const FVector Location7 = FVector(750.f, 170.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location7, Rotation);

	const FVector Location8 = FVector(750.f, 240.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location8, Rotation);

	const FVector Location16 = FVector(750.f, -320.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location16, Rotation);

	const FVector Location17 = FVector(750.f, 310.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location17, Rotation);

	// Primera fila
	const FVector Location9 = FVector(650.f, -200.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location9, Rotation);

	const FVector Location10 = FVector(650.f, -130.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location10, Rotation);
	
	const FVector Location11 = FVector(650.f, -60.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location11, Rotation);
	
	const FVector Location12 = FVector(650.f, 10.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location12, Rotation);

	const FVector Location13 = FVector(650.f, 80.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location13, Rotation);

	const FVector Location14 = FVector(650.f, 150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location14, Rotation);

	const FVector Location15 = FVector(650.f, 220.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location15, Rotation);

	const FVector Location18 = FVector(650.f, -270.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location18, Rotation);

	const FVector Location19 = FVector(650.f, 290.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location19, Rotation);

	// Tercera fila
	const FVector Location20 = FVector(850.f, -250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location20, Rotation);

	const FVector Location21 = FVector(850.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location21, Rotation);

	const FVector Location22 = FVector(850.f, -110.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location22, Rotation);

	const FVector Location23 = FVector(850.f, -40.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location23, Rotation);

	const FVector Location24 = FVector(850.f, 30.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location24, Rotation);

	const FVector Location25 = FVector(850.f, 100.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location25, Rotation);

	const FVector Location26 = FVector(850.f, 170.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location26, Rotation);

	const FVector Location27 = FVector(850.f, 240.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel1>(Location27, Rotation);
}

// Estableciendo el escuadron de nivel 2...
void APaB_Squadron::setSquadronLevel2()
{
	// Integrantes del escuadron 2
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	// Primera fila
	const FVector Location1 = FVector(620.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location1, Rotation);

	// Segunda fila
	const FVector Location2 = FVector(750.f, 70.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location2, Rotation);

	const FVector Location3 = FVector(750.f, -70.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location3, Rotation);

	// Tercera fila
	const FVector Location4 = FVector(880.f, 140.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location4, Rotation);

	const FVector Location5 = FVector(880.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location5, Rotation);

	const FVector Location6 = FVector(880.f, -140.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location6, Rotation);

	// Cuarta fila
	const FVector Location7 = FVector(1010.f, 210.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location7, Rotation);

	const FVector Location8 = FVector(1010.f, 80.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location8, Rotation);

	const FVector Location9 = FVector(1010.f, -80.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location9, Rotation);

	const FVector Location10 = FVector(1010.f, -210.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location10, Rotation);

	// Quinta fila
	const FVector Location11 = FVector(1140.f, 280.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location11, Rotation);

	const FVector Location12 = FVector(1140.f, 140.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location12, Rotation);

	const FVector Location13 = FVector(1140.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location13, Rotation);

	const FVector Location14 = FVector(1140.f, -140.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location14, Rotation);

	const FVector Location15 = FVector(1140.f, -280.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel2>(Location15, Rotation);
}

// Estableciendo el escuadron de nivel 3...
void APaB_Squadron::setSquadronLevel3()
{
	// Integrantes del escuadron 3
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	// Primera fila
	const FVector Location1 = FVector(650.f, 150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location1, Rotation);

	const FVector Location2 = FVector(650.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location2, Rotation);

	const FVector Location3 = FVector(650.f, -150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location3, Rotation);

	// Segunda fila
	const FVector Location4 = FVector(800.f, 75.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location4, Rotation);

	const FVector Location5 = FVector(800.f, -75.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location5, Rotation);

	// Tercera fila
	const FVector Location6 = FVector(950.f, 375.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location6, Rotation);

	const FVector Location7 = FVector(950.f, 225.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location7, Rotation);

	const FVector Location8 = FVector(950.f, 75.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location8, Rotation);

	const FVector Location9 = FVector(950.f, -75.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location9, Rotation);

	const FVector Location10 = FVector(950.f, -225.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location10, Rotation);

	const FVector Location11 = FVector(950.f, -375.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location11, Rotation);

	// Cuarta fila
	const FVector Location12 = FVector(1100.f, 150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location12, Rotation);

	const FVector Location13 = FVector(1100.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location13, Rotation);

	const FVector Location14 = FVector(1100.f, -150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel3>(Location14, Rotation);
}

// Estableciendo el escuadron de nivel 4...
void APaB_Squadron::setSquadronLevel4()
{
	// Integrantes del escuadron 4
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	// Primera fila
	const FVector Location1 = FVector(650.f, 250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location1, Rotation);

	const FVector Location2 = FVector(650.f, -250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location2, Rotation);

	// Segunda fila
	const FVector Location3 = FVector(850.f, 150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location3, Rotation);

	const FVector Location4 = FVector(850.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location4, Rotation);

	const FVector Location5 = FVector(850.f, -150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location5, Rotation);

	// Tercera fila
	const FVector Location6 = FVector(1050.f, 300.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location6, Rotation);

	const FVector Location7 = FVector(1050.f, 150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location7, Rotation);

	const FVector Location8 = FVector(1050.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location8, Rotation);

	const FVector Location9 = FVector(1050.f, -150.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location9, Rotation);

	const FVector Location10 = FVector(1050.f, -300.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location10, Rotation);

	// Cuarta fila
	const FVector Location11 = FVector(1250.f, 250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location11, Rotation);

	const FVector Location12 = FVector(1250.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location12, Rotation);

	const FVector Location13 = FVector(1250.f, -250.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel4>(Location13, Rotation);
}

// Estableciendo el escuadron de nivel 5...
void APaB_Squadron::setSquadronLevel5()
{
	// Integrantes del escuadron 5
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	// Primera fila
	const FVector Location1 = FVector(650.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location1, Rotation);

	const FVector Location2 = FVector(650.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location2, Rotation);

	const FVector Location3 = FVector(650.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location3, Rotation);

	const FVector Location4 = FVector(650.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location4, Rotation);

	const FVector Location5 = FVector(650.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location5, Rotation);

	// Segunda fila
	const FVector Location6 = FVector(800.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location6, Rotation);

	const FVector Location7 = FVector(800.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location7, Rotation);

	const FVector Location8 = FVector(800.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location8, Rotation);

	const FVector Location9 = FVector(800.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location9, Rotation);

	const FVector Location10 = FVector(800.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location10, Rotation);

	// Tercera fila
	const FVector Location11 = FVector(950.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location11, Rotation);

	const FVector Location12 = FVector(950.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location12, Rotation);

	const FVector Location13 = FVector(950.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location13, Rotation);

	const FVector Location14 = FVector(950.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location14, Rotation);

	const FVector Location15 = FVector(950.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location15, Rotation);

	// Cuarta fila
	const FVector Location16 = FVector(1100.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location16, Rotation);

	const FVector Location17 = FVector(1100.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location17, Rotation);

	const FVector Location18 = FVector(1100.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location18, Rotation);

	const FVector Location19 = FVector(1100.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location19, Rotation);

	const FVector Location20 = FVector(1100.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location20, Rotation);

	// Quinta fila
	const FVector Location21 = FVector(1250.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location21, Rotation);

	const FVector Location22 = FVector(1250.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location22, Rotation);

	const FVector Location23 = FVector(1250.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location23, Rotation);

	const FVector Location24 = FVector(1250.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location24, Rotation);

	const FVector Location25 = FVector(1250.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location25, Rotation);

	// Sexta fila
	const FVector Location26 = FVector(1400.f, 360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location26, Rotation);

	const FVector Location27 = FVector(1400.f, 180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location27, Rotation);

	const FVector Location28 = FVector(1400.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location28, Rotation);

	const FVector Location29 = FVector(1400.f, -180.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location29, Rotation);

	const FVector Location30 = FVector(1400.f, -360.f, 0.f);
	GetWorld()->SpawnActor<AEnemyLevel5>(Location30, Rotation);
}

