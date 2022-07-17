
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PaB_SquadMembers.generated.h"

// Esta clase no necesita ser modificada.
UINTERFACE(MinimalAPI)
class UPaB_SquadMembers : public UInterface
{
	GENERATED_BODY()
};

// Esta es la clase que se heredará para implementar esta interfaz.
class STARFIGHTER_API IPaB_SquadMembers
{
	GENERATED_BODY()

	// Agregue funciones de interfaz a esta clase.
public:
	// Las funciones virtuales puras de Squad Members
	virtual void setSquadronLevel1() = 0;
	virtual void setSquadronLevel2() = 0;
	virtual void setSquadronLevel3() = 0;
	virtual void setSquadronLevel4() = 0;
	virtual void setSquadronLevel5() = 0;
};
