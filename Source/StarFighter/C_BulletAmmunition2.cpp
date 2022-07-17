
#include "C_BulletAmmunition2.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_BulletAmmunition2::AC_BulletAmmunition2()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/BulletAmmunition2.BulletAmmunition2'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "BulletAmmunition2";
}
