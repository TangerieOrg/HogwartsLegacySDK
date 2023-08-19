#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleVelocity.hpp"
#include "UParticleModuleVelocity_Seeded.hpp"
UParticleModuleVelocity_Seeded* UParticleModuleVelocity_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocity_Seeded");
    return (UParticleModuleVelocity_Seeded*)res;
}
