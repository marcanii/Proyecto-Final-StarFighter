
#include "C_EmpowerWeapon.h"

// Establece valores predeterminados para las propiedades de este actor (Constructor)
AC_EmpowerWeapon::AC_EmpowerWeapon()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/EmpowerWeapon.EmpowerWeapon'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "EmpowerWeapon";
}
