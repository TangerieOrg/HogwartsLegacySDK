#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleColorBase.hpp"
#include "UParticleModuleColorScaleOverLife.hpp"
UParticleModuleColorScaleOverLife* UParticleModuleColorScaleOverLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleColorScaleOverLife");
    return (UParticleModuleColorScaleOverLife*)res;
}
