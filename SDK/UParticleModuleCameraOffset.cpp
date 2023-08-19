#include "EParticleCameraOffsetUpdateMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "UParticleModuleCameraBase.hpp"
#include "UParticleModuleCameraOffset.hpp"
UParticleModuleCameraOffset* UParticleModuleCameraOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleCameraOffset");
    return (UParticleModuleCameraOffset*)res;
}
