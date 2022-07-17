
#include "C_BulletAmmunition1.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_BulletAmmunition1::AC_BulletAmmunition1()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/BulletAmmunition1.BulletAmmunition1'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "BulletAmmunition1";
}
