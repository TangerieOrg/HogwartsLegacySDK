#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationPrimitiveBase.hpp"
UParticleModuleLocationPrimitiveBase* UParticleModuleLocationPrimitiveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationPrimitiveBase");
    return (UParticleModuleLocationPrimitiveBase*)res;
}
