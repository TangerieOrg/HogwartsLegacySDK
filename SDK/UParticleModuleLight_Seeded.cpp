#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLight.hpp"
#include "UParticleModuleLight_Seeded.hpp"
UParticleModuleLight_Seeded* UParticleModuleLight_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLight_Seeded");
    return (UParticleModuleLight_Seeded*)res;
}
