#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleMeshRotation.hpp"
#include "UParticleModuleMeshRotation_Seeded.hpp"
UParticleModuleMeshRotation_Seeded* UParticleModuleMeshRotation_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotation_Seeded");
    return (UParticleModuleMeshRotation_Seeded*)res;
}
