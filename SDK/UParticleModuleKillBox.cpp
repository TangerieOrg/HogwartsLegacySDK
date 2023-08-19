#include "FRawDistributionVector.hpp"
#include "UParticleModuleKillBase.hpp"
#include "UParticleModuleKillBox.hpp"
UParticleModuleKillBox* UParticleModuleKillBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleKillBox");
    return (UParticleModuleKillBox*)res;
}
