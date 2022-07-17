
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PaB_SquadBuilder.generated.h"

// Esta clase no necesita ser modificada.
UINTERFACE(MinimalAPI)
class UPaB_SquadBuilder : public UInterface
{
	GENERATED_BODY()
};

// Esta es la clase que se heredará para implementar esta interfaz.
class STARFIGHTER_API IPaB_SquadBuilder
{
	GENERATED_BODY()

// Agregue funciones de interfaz a esta clase
public:
	// Las funciones virtuales puras de Squad Members
	virtual void buildSquadron1() = 0;
	virtual void buildSquadron2() = 0;
	virtual void buildSquadron3() = 0;
	virtual void buildSquadron4() = 0;
	virtual void buildSquadron5() = 0;
};
