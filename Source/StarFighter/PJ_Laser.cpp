
#include "PJ_Laser.h"
#include "EnemyShip.h"
#include "EnemyLevel1.h"
#include "EnemyLevel2.h"
#include "EnemyLevel3.h"
#include "EnemyLevel4.h"
#include "EnemyLevel5.h"
#include "MotherShipLevel1.h"
#include "MotherShipLevel2.h"
#include "MotherShipLevel3.h"
#include "MotherShipLevel4.h"
#include "MotherShipLevel5.h"
#include "Asteroids.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
APJ_Laser::APJ_Laser()
{
	// creando la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Laser.Laser'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Determinando la velociad de la bala 1
	ProjectileMovement->InitialSpeed = 0.f;
	ProjectileMovement->MaxSpeed = 0.f;

	// tiempo de vida de bala
	InitialLifeSpan = 3.0f;

	// configurando el campo de colision de este actor
	ProjectileCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.f));
	ProjectileCollision->SetCapsuleHalfHeight(680.0f);
	ProjectileCollision->SetCapsuleRadius(5.0f);

	// Da�o del laser
	BulletDamage = 80.f;
}

void APJ_Laser::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	AEnemyShip* Enemy = Cast<AEnemyShip>(OtherActor);
	if (Enemy)
	{
		// si es la nave enemiga de nivel 1
		if (Enemy->getEnemyShipName() == "EnemyLevel1") {
			AEnemyLevel1* EnemyLevel1 = Cast<AEnemyLevel1>(OtherActor);
			EnemyLevel1->WeaponDamage(BulletDamage);
		}
		// si es la nave enemiga de nivel 2
		if (Enemy->getEnemyShipName() == "EnemyLevel2") {
			AEnemyLevel2* EnemyLevel2 = Cast<AEnemyLevel2>(OtherActor);
			EnemyLevel2->WeaponDamage(BulletDamage);
		}
		// si es la nave enemiga de nivel 3
		if (Enemy->getEnemyShipName() == "EnemyLevel3") {
			AEnemyLevel3* EnemyLevel3 = Cast<AEnemyLevel3>(OtherActor);
			EnemyLevel3->WeaponDamage(BulletDamage);
		}
		// si es la nave enemiga de nivel 4
		if (Enemy->getEnemyShipName() == "EnemyLevel4") {
			AEnemyLevel4* EnemyLevel4 = Cast<AEnemyLevel4>(OtherActor);
			EnemyLevel4->WeaponDamage(BulletDamage);
		}
		// si es la nave enemiga de nivel 5
		if (Enemy->getEnemyShipName() == "EnemyLevel5") {
			AEnemyLevel5* EnemyLevel5 = Cast<AEnemyLevel5>(OtherActor);
			EnemyLevel5->WeaponDamage(BulletDamage);
		}
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel1") {
			AMotherShipLevel1* MotherShip1 = Cast<AMotherShipLevel1>(OtherActor);
			MotherShip1->WeaponDamage(BulletDamage);
		}
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel1") {
			AMotherShipLevel1* MotherShip1 = Cast<AMotherShipLevel1>(OtherActor);
			MotherShip1->WeaponDamage(BulletDamage);
		}
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel2") {
			AMotherShipLevel2* MotherShip2 = Cast<AMotherShipLevel2>(OtherActor);
			MotherShip2->WeaponDamage(BulletDamage);
		}
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel3") {
			AMotherShipLevel3* MotherShip3 = Cast<AMotherShipLevel3>(OtherActor);
			MotherShip3->WeaponDamage(BulletDamage);
		}
		
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel4") {
			AMotherShipLevel4* MotherShip4 = Cast<AMotherShipLevel4>(OtherActor);
			MotherShip4->WeaponDamage(BulletDamage);
		}
		// si es la nave nodriza de nivel 1
		if (Enemy->getEnemyShipName() == "MotherShipLevel5") {
			AMotherShipLevel5* MotherShip5 = Cast<AMotherShipLevel5>(OtherActor);
			MotherShip5->WeaponDamage(BulletDamage);
		}
		
	}

	// se choca con el asteroide
	AAsteroids* Asteroid = Cast<AAsteroids>(OtherActor);
	if (Asteroid) {
		Asteroid->WeaponDamage(BulletDamage);
		this->Destroy();
	}
}
