
#pragma once

#include "CoreMinimal.h"
#include "SpaceShip.h"
#include "Components/CapsuleComponent.h"
#include "PlayerShip.generated.h"


UCLASS()
class STARFIGHTER_API APlayerShip : public ASpaceShip
{
	GENERATED_BODY()
	
public:
	// Constructor
	APlayerShip();

	// Propiedades de la nave jugador
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;

		// Propiedades de la nave jugador
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UStaticMeshComponent* ShipMesh; // la malla o cascara
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UParticleSystem* ShipExplosion; // para la explosion
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UParticleSystemComponent* ShipParticle; // para el propulsor
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class UCapsuleComponent* ShipCollision; // para colisiones
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* ExplosionSoundShip;	// sonido de explosion
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* SoundBullet1;	// sonido de disparo bala 1
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* SoundBullet2;	// sonido de disparo bala 2
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* SoundLaser;	// sonido de disparo laser
	UPROPERTY(EditAnywhere, Category = "Componentes")
		class USoundBase* SoundMissile;	// sonido de disparo misil

	// propiedad de tipo level pase para obtener el puntaje y el nivel en el que esta el jugador
	class ALevelPass* LevelPass;
	class APass* Pass;

private:
	// Nombres estáticos para enlaces de ejes y disparo
	static const FName MoveHorizontalBinding;
	static const FName MoveVerticalBinding;
	static const FName BulletLevel1;
	static const FName BulletLevel2;
	static const FName Laser;
	static const FName Missile;

	// Metodos para el movimiento de la nave jugador
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);

	// Metodos para el diparos de la nave
	void ShootBullet1();	// para la bala de nivel 1
	void ShootBullet2();	// para la bala de nivel 2
	void ShootLaser();		// para el laser
	void ShootMissile();	// para el misil

	// variables para el sistema de disparos
	FVector BulletShotDistance11;
	FVector BulletShotDistance12;
	FVector BulletShotDistance13;
	FVector BulletShotDistance21;
	FVector BulletShotDistance22;
	FVector BulletShotDistance23;
	FVector LaserShotDistance;
	FVector MissileShotDistance;

	// varibales para el escudo y la vida
	float Health;
	float Armor;
	int32 NumbersOfLives; // numero de vidas

	// para las municiones numero de balas de cada arma
	int NumbersBulletsGun1;
	int NumbersBulletsGun2;
	int NumbersLaserBullets;
	int NumbersMissileBullets;

	// para activar las capsulas speed, negativespeed y empowerbulet
	// capsula negativas
	float NegVelocity;
	float PosVelocity;
	float PosBullets;
	bool PosVel;
	bool NegVel;
	bool PosBull;

	// nivel
	int32 LevelValue;

	// puntaje del jugador
	int ScorePlayerShip;

	// para el game over
	int GameOver;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* HealthWidgetComp;

public:
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

	// Llamado para vincular la funcionalidad a la entrada
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// metodo para los daños de la nave
	void Damage(float _Damage);

	// metodo para la explocion
	void DestroyAndExplosion();

	// para dar valor a la vida
	void setLife(int value) { NumbersOfLives = value; }

	// Para comer las capsulas
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


	// metodos que seran usados en los bluwprint en unreal
	// metodo que devuelven el escudo
	UFUNCTION(BlueprintCallable)
		float getArmor() { return Armor; }

	// metodo que devuelve la energia 
	UFUNCTION(BlueprintCallable)
		float getHealth() { return Health; }

	// devuelve el numero de vidas
	UFUNCTION(BlueprintCallable)
		int getLives() { return NumbersOfLives; }

	// devuelve el numero de balas del arma 1
	UFUNCTION(BlueprintCallable)
		int getNumbersBulletsGun1() { return NumbersBulletsGun1; }

	// devuelve el numero de balas del arma 1
	UFUNCTION(BlueprintCallable)
		int getNumbersBulletsGun2() { return NumbersBulletsGun2; }

	// devuelve el numero de balas del laser
	UFUNCTION(BlueprintCallable)
		int getNumbersLaserBullets() { return NumbersLaserBullets; }

	// devuelve el numero de balas del misil
	UFUNCTION(BlueprintCallable)
		int getNumbersMissileBullets() { return NumbersMissileBullets; }

	// devuelve el nivel en el que estamos
	UFUNCTION(BlueprintCallable)
		int getLevelValue() { return LevelValue; }

	// devuelve el record del jugador
	UFUNCTION(BlueprintCallable)
		int getScoreValue() { return ScorePlayerShip; };
	// devuelve true o false de que si el jugador murio
	UFUNCTION(BlueprintCallable)
		int getGameOver() { return GameOver; }
};
