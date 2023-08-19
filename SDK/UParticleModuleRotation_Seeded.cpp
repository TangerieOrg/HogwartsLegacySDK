#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleRotation.hpp"
#include "UParticleModuleRotation_Seeded.hpp"
UParticleModuleRotation_Seeded* UParticleModuleRotation_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotation_Seeded");
    return (UParticleModuleRotation_Seeded*)res;
}
