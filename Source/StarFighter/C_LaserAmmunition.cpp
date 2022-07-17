
#include "C_LaserAmmunition.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_LaserAmmunition::AC_LaserAmmunition()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/LaserAmmunition.LaserAmmunition'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "LaserAmmunition";
}
