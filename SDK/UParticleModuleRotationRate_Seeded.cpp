#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleRotationRate.hpp"
#include "UParticleModuleRotationRate_Seeded.hpp"
UParticleModuleRotationRate_Seeded* UParticleModuleRotationRate_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationRate_Seeded");
    return (UParticleModuleRotationRate_Seeded*)res;
}
