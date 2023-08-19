#include "FRawDistributionVector.hpp"
#include "UParticleModuleAccelerationBase.hpp"
#include "UParticleModuleAccelerationOverLifetime.hpp"
UParticleModuleAccelerationOverLifetime* UParticleModuleAccelerationOverLifetime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAccelerationOverLifetime");
    return (UParticleModuleAccelerationOverLifetime*)res;
}
