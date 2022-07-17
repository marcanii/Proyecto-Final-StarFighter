
#include "C_NegativeSpeed.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_NegativeSpeed::AC_NegativeSpeed()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/NegativeSpeed.NegativeSpeed'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "NegativeSpeed";
}
