#include "UDistributionVectorParameterBase.hpp"
#include "UDistributionVectorParticleParameter.hpp"
UDistributionVectorParticleParameter* UDistributionVectorParticleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionVectorParticleParameter");
    return (UDistributionVectorParticleParameter*)res;
}
