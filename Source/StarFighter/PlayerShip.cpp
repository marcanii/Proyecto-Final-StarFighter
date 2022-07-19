
#include "PlayerShip.h"
#include "PJ_BulletLevel1.h"
#include "PJ_BulletLevel2.h"
#include "PJ_Missile.h"
#include "PJ_Laser.h"
#include "Kismet/GameplayStatics.h"
#include "MyCapsule.h"
#include "LevelPass.h"
#include "Pass.h"
#include "PaS_TypeOfWeapon.h"
#include "PaS_Bullet1.h"
#include "PaS_Bullet2.h"
#include "PaS_Missile.h"
#include "PaS_Lasser.h"

// Enlazando inputs con el unreal 
const FName APlayerShip::MoveHorizontalBinding("MoveHorizontal");
const FName APlayerShip::MoveVerticalBinding("MoveVertical");
const FName APlayerShip::BulletLevel1("Bullet1");
const FName APlayerShip::BulletLevel2("Bullet2");
const FName APlayerShip::Laser("Laser");
const FName APlayerShip::Missile("Missile");
const FName APlayerShip::Shoot("Shoot");

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


	// variables activar speed, negativeespeed y empowerbullets
	NegVelocity = 0.f;
	PosVelocity = 0.f;
	PosBullets = 0.f;
	PosVel = false;
	NegVel = false;
	PosBull = false;

	// para seleccionar las armas a usar
	ValueShootWeapon = 0;

	// creando sonido de seleccionar arma
	static ConstructorHelpers::FObjectFinder<USoundBase> EatAudio(TEXT("SoundWave'/Game/Sound/ComerCapsula.ComerCapsula'"));
	SoundSelectWeapon = EatAudio.Object;
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

	// puntaje del jugador inicializando en 0
	ScorePlayerShip = LevelPass->getScore();
	LevelPass->setScore(-ScorePlayerShip);

	// nivel valor
	LevelValue = 1;

	// puntaje del jugador
	ScorePlayerShip = 0;

	// game over si es 0 sigue vivo si es 1 ya muerto el jugador
	GameOver = 0;

	// actor estatico para pasar el arma que se escogio y disparar
	TypeOfWeapon = GetWorld()->SpawnActor<APaS_TypeOfWeapon>(APaS_TypeOfWeapon::StaticClass());
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
	InputComponent->BindAction(Shoot, IE_Pressed, this, &APlayerShip::ShootWeapon);
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

// Metodo para seleccion de la arma 1
void APlayerShip::ShootBullet1()
{
	// seleccionamos el arma 1
	ValueShootWeapon = 1;

	// sonido de seleccion de arma
	if (SoundSelectWeapon != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, SoundSelectWeapon, GetActorLocation());
}

// Metodo para seleccion de la arma 2
void APlayerShip::ShootBullet2()
{
	// seleccionamos el arma 2
	ValueShootWeapon = 2;

	// sonido de seleccion de arma
	if (SoundSelectWeapon != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, SoundSelectWeapon, GetActorLocation());
}

// Metodo para seleccion del laser
void APlayerShip::ShootLaser()
{
	// seleccionamos el arma3 = laser
	ValueShootWeapon = 3;

	// sonido de seleccion de arma
	if (SoundSelectWeapon != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, SoundSelectWeapon, GetActorLocation());
}

// Metodo para seleccion del misil
void APlayerShip::ShootMissile()
{
	// seleccionamos el arma4 = misil
	ValueShootWeapon = 4;

	// sonido de seleccion de arma
	if (SoundSelectWeapon != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, SoundSelectWeapon, GetActorLocation());
}

void APlayerShip::ShootWeapon()
{
	if (ValueShootWeapon == 1 && NumbersBulletsGun1 > 0)
	{
		APaS_Bullet1* Bullet1 = GetWorld()->SpawnActor<APaS_Bullet1>(APaS_Bullet1::StaticClass());
		TypeOfWeapon->AlterShoot(Bullet1);
		NumbersBulletsGun1 -= 1;

		if (NumbersBulletsGun1 <= 0)
			TypeOfWeapon->AlterShoot(nullptr);

		// sonido de disparo
		if (SoundBullet1 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet1, GetActorLocation());
		
	}
	if (ValueShootWeapon == 2 && NumbersBulletsGun2 > 0)
	{
		APaS_Bullet2* Bullet2 = GetWorld()->SpawnActor<APaS_Bullet2>(APaS_Bullet2::StaticClass());
		TypeOfWeapon->AlterShoot(Bullet2);
		NumbersBulletsGun2 -= 1;

		if (NumbersBulletsGun2 <= 0)
			TypeOfWeapon->AlterShoot(nullptr);

		// sonido de disparo
		if (SoundBullet2 != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundBullet2, GetActorLocation());
	}
	if (ValueShootWeapon == 3 && NumbersLaserBullets > 0)
	{
		APaS_Lasser* Lasser = GetWorld()->SpawnActor<APaS_Lasser>(APaS_Lasser::StaticClass());
		TypeOfWeapon->AlterShoot(Lasser);
		NumbersLaserBullets -= 1;

		if (NumbersLaserBullets <= 0)
			TypeOfWeapon->AlterShoot(nullptr);

		// sonido de disparo
		if (SoundLaser != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundLaser, GetActorLocation());
	}
	if (ValueShootWeapon == 4 && NumbersMissileBullets >= 0)
	{
		APaS_Missile* Missilee = GetWorld()->SpawnActor<APaS_Missile>(APaS_Missile::StaticClass());
		TypeOfWeapon->AlterShoot(Missilee);
		NumbersMissileBullets -= 1;

		if (NumbersMissileBullets < 0)
			TypeOfWeapon->AlterShoot(nullptr);

		// sonido de disparo
		if (SoundMissile != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, SoundMissile, GetActorLocation());

	}

	// obtenemos la ubicacion del jugador
	FVector LocationPlayer = GetActorLocation();

	// para usar el arma seleccionada
	TypeOfWeapon->UseWeapon(LocationPlayer, PosBull);
}
