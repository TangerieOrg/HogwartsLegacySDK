#include "FRawDistributionFloat.hpp"
#include "UParticleModuleKillBase.hpp"
#include "UParticleModuleKillHeight.hpp"
UParticleModuleKillHeight* UParticleModuleKillHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleKillHeight");
    return (UParticleModuleKillHeight*)res;
}
