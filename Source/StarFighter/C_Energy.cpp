
#include "C_Energy.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_Energy::AC_Energy()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Energy.Energy'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "Energy";
}
