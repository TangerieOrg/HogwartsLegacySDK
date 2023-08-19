#include "UParticleModule.hpp"
#include "UParticleModuleLightBase.hpp"
UParticleModuleLightBase* UParticleModuleLightBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLightBase");
    return (UParticleModuleLightBase*)res;
}
