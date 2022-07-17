
#include "C_MissileAmmunition.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_MissileAmmunition::AC_MissileAmmunition()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/MissileAmmunition.MissileAmmunition'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "MissileAmmunition";
}
