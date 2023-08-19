#include "UParticleModule.hpp"
#include "UParticleModuleRotationRateBase.hpp"
UParticleModuleRotationRateBase* UParticleModuleRotationRateBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationRateBase");
    return (UParticleModuleRotationRateBase*)res;
}
