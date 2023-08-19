#include "FRawDistributionVector.hpp"
#include "UParticleModuleMeshRotation.hpp"
#include "UParticleModuleRotationBase.hpp"
UParticleModuleMeshRotation* UParticleModuleMeshRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshRotation");
    return (UParticleModuleMeshRotation*)res;
}
