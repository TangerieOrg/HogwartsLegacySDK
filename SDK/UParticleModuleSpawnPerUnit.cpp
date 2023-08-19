#include "FRawDistributionFloat.hpp"
#include "UParticleModuleSpawnBase.hpp"
#include "UParticleModuleSpawnPerUnit.hpp"
UParticleModuleSpawnPerUnit* UParticleModuleSpawnPerUnit::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSpawnPerUnit");
    return (UParticleModuleSpawnPerUnit*)res;
}
