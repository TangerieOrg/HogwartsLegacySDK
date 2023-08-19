#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleMeshRotationRate.hpp"
#include "UParticleModuleMeshRotationRate_Seeded.hpp"
UParticleModuleMeshRotationRate_Seeded* UParticleModuleMeshRotationRate_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotationRate_Seeded");
    return (UParticleModuleMeshRotationRate_Seeded*)res;
}
