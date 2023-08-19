#include "FRawDistributionVector.hpp"
#include "UParticleModuleSize.hpp"
#include "UParticleModuleSizeBase.hpp"
UParticleModuleSize* UParticleModuleSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSize");
    return (UParticleModuleSize*)res;
}
