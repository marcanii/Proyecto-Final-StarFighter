
#include "C_Shield.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_Shield::AC_Shield()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Shield.Shield'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "Shield";
}
