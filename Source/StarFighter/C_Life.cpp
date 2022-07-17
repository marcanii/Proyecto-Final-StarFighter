
#include "C_Life.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_Life::AC_Life()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Life.Life'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "Life";
}
