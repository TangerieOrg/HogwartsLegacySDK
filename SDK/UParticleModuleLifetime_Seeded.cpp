#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleLifetime.hpp"
#include "UParticleModuleLifetime_Seeded.hpp"
UParticleModuleLifetime_Seeded* UParticleModuleLifetime_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLifetime_Seeded");
    return (UParticleModuleLifetime_Seeded*)res;
}
