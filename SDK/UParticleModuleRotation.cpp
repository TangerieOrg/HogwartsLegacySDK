#include "FRawDistributionFloat.hpp"
#include "UParticleModuleRotation.hpp"
#include "UParticleModuleRotationBase.hpp"
UParticleModuleRotation* UParticleModuleRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleRotation");
    return (UParticleModuleRotation*)res;
}
