#include "FRawDistributionVector.hpp"
#include "UParticleModuleSizeBase.hpp"
#include "UParticleModuleSizeMultiplyLife.hpp"
UParticleModuleSizeMultiplyLife* UParticleModuleSizeMultiplyLife::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSizeMultiplyLife");
    return (UParticleModuleSizeMultiplyLife*)res;
}
