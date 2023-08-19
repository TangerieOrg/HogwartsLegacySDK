#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleColorBase.hpp"
#include "UParticleModuleColorOverLife.hpp"
UParticleModuleColorOverLife* UParticleModuleColorOverLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleColorOverLife");
    return (UParticleModuleColorOverLife*)res;
}
