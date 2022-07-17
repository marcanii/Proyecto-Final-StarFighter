
#include "C_Speed.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_Speed::AC_Speed()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "Speed";
}
