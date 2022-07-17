
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaS_Scenery.generated.h"

UCLASS()
class STARFIGHTER_API APaS_Scenery : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	APaS_Scenery();

	// Mesh del escenario
	UPROPERTY(BlueprintReadOnly, Category = "Niveles del juego")
		class UStaticMeshComponent* SceneryMesh;
	// material del mesh escenario
	UPROPERTY(BlueprintReadOnly)
		class UMaterialInterface* SceneryMaterial;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	// Llamado a cada cuadro (frame)
	virtual void Tick(float DeltaTime) override;

};
