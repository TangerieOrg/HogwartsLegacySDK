#include "UParticleModule.hpp"
#include "UParticleModuleLifetimeBase.hpp"
UParticleModuleLifetimeBase* UParticleModuleLifetimeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLifetimeBase");
    return (UParticleModuleLifetimeBase*)res;
}
