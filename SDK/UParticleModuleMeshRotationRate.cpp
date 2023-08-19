#include "FRawDistributionVector.hpp"
#include "UParticleModuleMeshRotationRate.hpp"
#include "UParticleModuleRotationRateBase.hpp"
UParticleModuleMeshRotationRate* UParticleModuleMeshRotationRate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotationRate");
    return (UParticleModuleMeshRotationRate*)res;
}
