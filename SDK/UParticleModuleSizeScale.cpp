#include "FRawDistributionVector.hpp"
#include "UParticleModuleSizeBase.hpp"
#include "UParticleModuleSizeScale.hpp"
UParticleModuleSizeScale* UParticleModuleSizeScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSizeScale");
    return (UParticleModuleSizeScale*)res;
}
