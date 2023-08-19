#include "FParticleRandomSeedInfo.hpp"
#include "UParticleModuleColor.hpp"
#include "UParticleModuleColor_Seeded.hpp"
UParticleModuleColor_Seeded* UParticleModuleColor_Seeded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleColor_Seeded");
    return (UParticleModuleColor_Seeded*)res;
}
