#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationRate.hpp"
#include "UParticleModuleRotationRateBase.hpp"
UParticleModuleRotationRate* UParticleModuleRotationRate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationRate");
    return (UParticleModuleRotationRate*)res;
}
