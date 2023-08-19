#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotationRateBase.hpp"
#include "UParticleModuleRotationRateMultiplyLife.hpp"
UParticleModuleRotationRateMultiplyLife* UParticleModuleRotationRateMultiplyLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotationRateMultiplyLife");
    return (UParticleModuleRotationRateMultiplyLife*)res;
}
