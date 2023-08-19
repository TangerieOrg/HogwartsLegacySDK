#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationDirect.hpp"
UParticleModuleLocationDirect* UParticleModuleLocationDirect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationDirect");
    return (UParticleModuleLocationDirect*)res;
}
