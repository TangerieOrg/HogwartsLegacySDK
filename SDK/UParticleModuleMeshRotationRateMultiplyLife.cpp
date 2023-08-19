#include "FRawDistributionVector.hpp"
#include "UParticleModuleMeshRotationRateMultiplyLife.hpp"
#include "UParticleModuleRotationRateBase.hpp"
UParticleModuleMeshRotationRateMultiplyLife* UParticleModuleMeshRotationRateMultiplyLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotationRateMultiplyLife");
    return (UParticleModuleMeshRotationRateMultiplyLife*)res;
}
