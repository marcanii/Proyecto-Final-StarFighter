
#include "C_CapsulePass.h"

// Establece valores predeterminados para las propiedades de este actor(Constructor)
AC_CapsulePass::AC_CapsulePass()
{
	// Establecemos el mesh que llevara la capsula
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/CapsulePass.CapsulePass'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// Nombre de la capsula
	NameCapsule = "CapsulePass";
}

void AC_CapsulePass::BeginPlay()
{
	Super::BeginPlay();

	// velocidad de la capsula pase de nivel
	VelocityCapsule = 0.f;
}
