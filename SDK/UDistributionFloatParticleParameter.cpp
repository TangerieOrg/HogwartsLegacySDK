#include "UDistributionFloatParameterBase.hpp"
#include "UDistributionFloatParticleParameter.hpp"
UDistributionFloatParticleParameter* UDistributionFloatParticleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionFloatParticleParameter");
    return (UDistributionFloatParticleParameter*)res;
}
