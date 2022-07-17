
#include "PlayerShip.h"
#include "PJ_BulletLevel1.h"
#include "PJ_BulletLevel2.h"
#include "PJ_Missile.h"
#include "PJ_Laser.h"
#include "Kismet/GameplayStatics.h"
#include "MyCapsule.h"
#include "LevelPass.h"
#include "Pass.h"

// Enlazando inputs con el unreal 
const FName APlayerShip::MoveHorizontalBinding("MoveHorizontal");
const FName APlayerShip::MoveVerticalBinding("MoveVertical");
const FName APlayerShip::BulletLevel1("Bullet1");
const FName APlayerShip::BulletLevel2("Bullet2");
const FName APlayerShip::Laser("Laser");
const FName APlayerShip::Missile("Missile");

// Establece valores predeterminados para las propiedades de este actor(Constructor)
APlayerShip::APlayerShip()
{
	// Configure este peón para llamar a Tick() en cada cuadro. Puede desactivarlo para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	// nave jugador posee automaticamente la camara al empezar el nivel
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Llamano al componente ruta
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// creando la malla de la nava jugador 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetPlayer(TEXT("StaticMesh'/Game/Meshes/PlayerShip1.PlayerShip1'"));
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh Player"));
	ShipMesh->SetStaticMesh(AssetPlayer.Object);
	ShipParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ship Particle Player"));

	// campo de colision
	ShipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Player"));

	// creamos el efecto de explosion
	static ConstructorHelpers::FObjectFinder<UParticleSystem> AssetExplosion(TEXT("ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'"));
	ShipExplosion = CreateDefaultSubobject<UParticleSystem>(TEXT("Explosion"));
	ShipExplosion = AssetExplosion.Object;

	// creando sonido de explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> ExplosionAudio(TEXT("SoundWave'/Game/Sound/Explosion02.Explosion02'"));
	ExplosionSoundShip = ExplosionAudio.Object;

	// creando sonidos de disparo
	static ConstructorHelpers::FObjectFinder<USoundBase> Bullet1Audio(TEXT("SoundWave'/Game/Sound/Laser2.Laser2'"));
	SoundBullet1 = Bullet1Audio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> Bullet2Audio(TEXT("SoundWave'/Game/Sound/Disparar1.Disparar1'"));
	SoundBullet2 = Bullet2Audio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> LaserAudio(TEXT("SoundWave'/Game/Sound/laser1.laser1'"));
	SoundLaser = LaserAudio.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> MissileAudio(TEXT("SoundWave'/Game/Sound/Misil.Misil'"));
	SoundMissile = MissileAudio.Object;


	// atachando al comoponente root
	ShipMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipParticle->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// vectores para el dispario (distancia)
	BulletShotDistance11 = FVector(40.f, 20.f, 0.f);
	BulletShotDistance12 = FVector(40.f, 0.f, 0.f);
	BulletShotDistance13 = FVector(40.f, -20.f, 0.f);
	BulletShotDistance21 = FVector(65.f, 20.f, 0.f);
	BulletShotDistance22 = FVector(65.f, 0.f, 0.f);
	BulletShotDistance23 = FVector(65.f, -20.f, 0.f);
	LaserShotDistance = FVector(700.f, 0.f, 0.f);
	MissileShotDistance = FVector(73.f, 0.f, 0.f);

	// variables activar speed, negativeespeed y empowerbullets
	NegVelocity = 0.f;
	PosVelocity = 0.f;
	PosBullets = 0.f;
	PosVel = false;
	NegVel = false;
	PosBull = false;
}

// Llamado cuando comienza el juego o cuando se genera
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de la nave jugador
	Velocity = 350.0f;

	// vida maxima y escudo maximo
	Health = 100.f;
	Armor = 100.f;

	// numero de vidas al iniciar el juego
	NumbersOfLives = 3;

	// numero de balas de cada arma al iniciar
	NumbersBulletsGun1 = 40;
	NumbersBulletsGun2 = 20;
	NumbersLaserBullets = 10;
	NumbersMissileBullets = 5;

	// creamos un actor estatico para validar los niveles
	LevelPass = GetWorld()->SpawnActor<ALevelPass>(ALevelPass::StaticClass());

	Pass = GetWorld()->SpawnActor<APass>(APass::StaticClass());
	// nivel valor
	LevelValue = 1;

	// puntaje del jugador
	ScorePlayerShip = 0;

	// game over si es 0 sigue vivo si es 1 ya muerto el jugador
	GameOver = 0;
}

// Llamado a cada cuadro (frame)
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// condicion para hacer mover la nave jugador 
	if (Current_X_Velocity != 0.0f || Current_Y_Velocity != 0.0f) {
		NewLocation = FVector(CurrentLocation.X + (Current_X_Velocity * DeltaTime),
			CurrentLocation.Y + (Current_Y_Velocity * DeltaTime), 0);

		this->SetActorLocation(NewLocation);

		CurrentLocation = NewLocation;
	}

	// si la salud es menor que cero la nave explota pero no desaparecer solo se le resta una vida
	if (Health <= 0.f) {
		DestroyAndExplosion();
	}
	// si las vias son 0 la nave desaparece
	if (NumbersOfLives <= 0) {
		GameOver = 1;
	}

	// potenciar velocidad
	PosVelocity -= DeltaTime;
	if (PosVelocity <= 0.f && PosVel == true) {
		Velocity = 350.f;
		PosVel = false;
	}
	// empeorar velocidad
	NegVelocity -= DeltaTime;
	if (NegVelocity <= 0.f && NegVel == true) {
		Velocity = 350.f;
		NegVel = false;
	}
	// potenciar armas
	PosBullets -= DeltaTime;
	if (PosBullets <= 0.f && PosBull == true)
		PosBull = false;

	// puntaje del jugador
	ScorePlayerShip = LevelPass->getScore();
}

// daños que recibe la nave
void APlayerShip::Damage(float _Damage)
{
	// si tiene escudo que reduzca del escudo
	if (Armor >= 0.f)
		Armor -= _Damage;
	// reduce de la energia si el escudo ya no tiene
	if (Armor <= 0.f && Health >= 0.f)
		Health -= _Damage;
}

// metodo de explosion
void APlayerShip::DestroyAndExplosion()
{
	// efecto de la explosion
	if (ShipExplosion)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosion, GetActorTransform());
	// sonido de la explosion
	if (ExplosionSoundShip != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, ExplosionSoundShip, GetActorLocation());

	// se reduce una vida
	NumbersOfLives -= 1;
	// se reestablece todo del jugador
	Health = 100.f;
	Armor = 100.f;
	NumbersBulletsGun1 = 40;
	NumbersBulletsGun2 = 20;
	NumbersLaserBullets = 10;
	NumbersMissileBullets = 5;
}

// metodo para comer las capsulas
void APlayerShip::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AMyCapsule* CapsuleItem = Cast<AMyCapsule>(OtherActor);

	// si se choca con una capsula
	if (CapsuleItem) {
		if (CapsuleItem->getNameCapsule() == "BulletAmmunition1") {
			CapsuleItem->TakeCapsule();
			NumbersBulletsGun1 += 30;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "BulletAmmunition2") {
			CapsuleItem->TakeCapsule();
			NumbersBulletsGun2 += 15;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "EmpowerWeapon") {
			CapsuleItem->TakeCapsule();
			PosBullets = 0.f;
			PosBullets = 10.f;
			PosBull = true;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "Energy") {
			CapsuleItem->TakeCapsule();
			if (Health < 100) {
				float res = 100 - Health;
				Health += res;
			}
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "LaserAmmunition") {
			CapsuleItem->TakeCapsule();
			NumbersLaserBullets += 5;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "Life") {
			CapsuleItem->TakeCapsule();
			NumbersOfLives += 1;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "MissileAmmunition") {
			CapsuleItem->TakeCapsule();
			NumbersMissileBullets += 3;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "NegativeEnergy") {
			CapsuleItem->TakeCapsule();
			Health -= 40.f;
			LevelPass->setScore(-10);
		}
		if (CapsuleItem->getNameCapsule() == "NegativeSpeed") {
			CapsuleItem->TakeCapsule();
			Velocity -= 250.f;
			NegVelocity = 0.f;
			NegVelocity += 10;
			NegVel = true;
			LevelPass->setScore(-10);
		}
		if (CapsuleItem->getNameCapsule() == "Shield") {
			CapsuleItem->TakeCapsule();
			if (Armor < 100) {
				float res = 100 - Armor;
				Armor += res;
			}
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "Speed") {
			CapsuleItem->TakeCapsule();
			Velocity += 400.f;
			PosVelocity = 0.f;
			PosVelocity += 10;
			PosVel = true;
			LevelPass->setScore(2);
		}
		if (CapsuleItem->getNameCapsule() == "CapsulePass")
		{
			CapsuleItem->TakeCapsule();
			Pass->setCapsulePass(1);
			LevelValue += 1;
			LevelPass->setScore(100);
		}
	}
}

// Llamado para vincular la funcionalidad a la entrada
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// conectando con el unreal para el manejo de las teclas
	PlayerInputComponent->BindAxis(MoveHorizontalBinding, this, &APlayerShip::MoveHorizontal);
	PlayerInputComponent->BindAxis(MoveVerticalBinding, this, &APlayerShip::MoveVertical);
	InputComponent->BindAction(BulletLevel1, IE_Pressed, this, &APlayerShip::ShootBullet1);
	InputComponent->BindAction(BulletLevel2, IE_Pressed, this, &APlayerShip::ShootBullet2);
	InputComponent->BindAction(Laser, IE_Pressed, this, &APlayerShip::ShootLaser);
	InputComponent->BindAction(Missile, IE_Pressed, this, &APlayerShip::ShootMissile);
}

// calcula la velocidad en el eje horizontal
void APlayerShip::MoveHorizontal(float AxisValue)
{
	Current_X_Velocity = Velocity * AxisValue;
}

// calcula la velocidad en el eje horizontal
void APlayerShip::MoveVertical(float AxisValue)
{
	Current_Y_Velocity = Velocity * AxisValue;
}

// Metodo para el disparo de la arma 1
void APlayerShip::ShootBullet1()
{
	// si el arma no esta potenciada dispara sola una bala y tambien si tenemos municiones
	if (NumbersBulletsGun1 > 0 && PosBull == false)
	{
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();

		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(BulletShotDistance12);
		UWorld* const World = GetWorld();
		// engendrando la bala
		if (World != nullptr)
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation, FireRotation);
		// sonido de disparo
		if(SoundBullet1 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet1, GetActorLocation());

		// quitamos una bala
		NumbersBulletsGun1 -= 1;
	}

	// si el arma esta potenciada dispara 3 balas y tambien si tenemos municiones
	if (NumbersBulletsGun1 > 0 && PosBull == true) {
		// ubicacion y rotacion de una de las tres bala (arriba)
		const FVector FireDirection1 = FVector(1.f, 0.2f, 0.f);
		const FRotator FireRotation1 = FireDirection1.Rotation();
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation1.RotateVector(BulletShotDistance11);

		// ubicacion y rotacion de una de las tres bala (medio)
		const FVector FireDirection2 = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation2 = FireDirection2.Rotation();
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation2.RotateVector(BulletShotDistance12);

		// ubicacion y rotacion de una de las tres bala (abajo)
		const FVector FireDirection3 = FVector(1.f, -0.2f, 0.f);
		const FRotator FireRotation3 = FireDirection3.Rotation();
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation3.RotateVector(BulletShotDistance13);

		// engendrando las balas
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation1, FireRotation1);
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation2, FireRotation2);
			World->SpawnActor<APJ_BulletLevel1>(SpawnLocation3, FireRotation3);
		}
		// sonido de disparo
		if (SoundBullet1 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet1, GetActorLocation());
		// quitamos una bala
		NumbersBulletsGun1 -= 3;
	}
	// para verificar cuando se acaben las balas sea 0
	if (NumbersBulletsGun1 < 0)
		NumbersBulletsGun1 = 0;
}

// Metodo para el disparo de la arma 2
void APlayerShip::ShootBullet2()
{
	// si el arma no esta potencia dispara una sola bala y tambien si tenemos municiones
	if (NumbersBulletsGun2 > 0 && PosBull == false)
	{
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(BulletShotDistance22);
		// engendrando la bala
		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation, FireRotation);
		// sonido de disparo
		if (SoundBullet2 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet2, GetActorLocation());

		// quitamos una bala
		NumbersBulletsGun2 -= 1;
	}

	// si la arma esta potenciada dispara tres balas y tambien si tenemos municiones
	if (NumbersBulletsGun2 > 0 && PosBull == true) {
		// direccion y rotacion para las tres balas seran las mismas
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();

		// ubicacion de una de las balas (arriba)
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation.RotateVector(BulletShotDistance21);
		// ubicacion de una de las balas (medio)
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(BulletShotDistance22);
		// ubicacion de una de las balas (abajo)
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation.RotateVector(BulletShotDistance23);

		// engendrando las balas
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation1, FireRotation);
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation2, FireRotation);
			World->SpawnActor<APJ_BulletLevel2>(SpawnLocation3, FireRotation);
		}
		// sonido de disparo
		if (SoundBullet2 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet2, GetActorLocation());

		// quitamos tres bala
		NumbersBulletsGun2 -= 3;
	}
	// para verificar que si no hay balas este sea 0
	if (NumbersBulletsGun2 < 0)
		NumbersBulletsGun2 = 0;
}

// Metodo para el disparo del laser
void APlayerShip::ShootLaser()
{
	// dispara laser si tenemos municiones
	if (NumbersLaserBullets > 0)
	{
		// direccion, rotacion y ubicacion del laser
		const FVector FireDirection = FVector(0.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(LaserShotDistance);
		// 
		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<APJ_Laser>(SpawnLocation, FireRotation);
		// sonido de disparo
		if (SoundLaser != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundLaser, GetActorLocation());

		// quitamos un laser
		NumbersLaserBullets -= 1;
	}
}

// Metodo para el disparo del misil
void APlayerShip::ShootMissile()
{
	// disparamos misiles si tenemos municiones
	if (NumbersMissileBullets > 0)
	{
		// direccion, rotacion y ubicacion del missil
		const FVector FireDirection = FVector(1.f, 0.f, 0.f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(MissileShotDistance);
		// engendrar el misil
		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<APJ_Missile>(SpawnLocation, FireRotation);
		// sonido de disparo
		if (SoundMissile != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundMissile, GetActorLocation());
		// quitamos un misil
		NumbersMissileBullets -= 1;
	}
}
