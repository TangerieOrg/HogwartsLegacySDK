#include "UParticleModule.hpp"
#include "UParticleModuleAccelerationBase.hpp"
UParticleModuleAccelerationBase* UParticleModuleAccelerationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAccelerationBase");
    return (UParticleModuleAccelerationBase*)res;
}
