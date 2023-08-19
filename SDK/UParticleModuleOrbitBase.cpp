#include "UParticleModule.hpp"
#include "UParticleModuleOrbitBase.hpp"
UParticleModuleOrbitBase* UParticleModuleOrbitBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleOrbitBase");
    return (UParticleModuleOrbitBase*)res;
}
