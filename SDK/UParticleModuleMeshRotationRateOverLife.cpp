#include "FRawDistributionVector.hpp"
#include "UParticleModuleMeshRotationRateOverLife.hpp"
#include "UParticleModuleRotationRateBase.hpp"
UParticleModuleMeshRotationRateOverLife* UParticleModuleMeshRotationRateOverLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotationRateOverLife");
    return (UParticleModuleMeshRotationRateOverLife*)res;
}
