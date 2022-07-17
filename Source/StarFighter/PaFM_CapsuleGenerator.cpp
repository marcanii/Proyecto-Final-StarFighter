
#include "PaFM_CapsuleGenerator.h"

// metodo que sera publico para poder fabricar las capsula
AMyCapsule* APaFM_CapsuleGenerator::getCapsule(FString TypeCapsule)
{
    AMyCapsule* Capsule = MakeCapsule(TypeCapsule);
    return Capsule;
}
