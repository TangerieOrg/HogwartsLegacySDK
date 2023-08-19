#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationPrimitiveTriangle.hpp"
UParticleModuleLocationPrimitiveTriangle* UParticleModuleLocationPrimitiveTriangle::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationPrimitiveTriangle");
    return (UParticleModuleLocationPrimitiveTriangle*)res;
}
