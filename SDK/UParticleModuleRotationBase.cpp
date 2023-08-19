#include "UParticleModule.hpp"
#include "UParticleModuleRotationBase.hpp"
UParticleModuleRotationBase* UParticleModuleRotationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationBase");
    return (UParticleModuleRotationBase*)res;
}
