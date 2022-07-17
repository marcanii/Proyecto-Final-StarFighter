
#include "C_NegativeEnergy.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_NegativeEnergy::AC_NegativeEnergy()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/NegativeEnergy.NegativeEnergy'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "NegativeEnergy";
}
