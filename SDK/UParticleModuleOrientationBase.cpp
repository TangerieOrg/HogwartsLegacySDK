#include "UParticleModule.hpp"
#include "UParticleModuleOrientationBase.hpp"
UParticleModuleOrientationBase* UParticleModuleOrientationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleOrientationBase");
    return (UParticleModuleOrientationBase*)res;
}
