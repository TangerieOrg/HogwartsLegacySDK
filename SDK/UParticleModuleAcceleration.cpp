#include "FRawDistributionVector.hpp"
#include "UParticleModuleAcceleration.hpp"
#include "UParticleModuleAccelerationBase.hpp"
UParticleModuleAcceleration* UParticleModuleAcceleration::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAcceleration");
    return (UParticleModuleAcceleration*)res;
}
