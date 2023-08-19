#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleColor.hpp"
#include "UParticleModuleColorBase.hpp"
UParticleModuleColor* UParticleModuleColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleColor");
    return (UParticleModuleColor*)res;
}
