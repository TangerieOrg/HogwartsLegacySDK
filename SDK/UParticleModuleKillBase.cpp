#include "UParticleModule.hpp"
#include "UParticleModuleKillBase.hpp"
UParticleModuleKillBase* UParticleModuleKillBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleKillBase");
    return (UParticleModuleKillBase*)res;
}
