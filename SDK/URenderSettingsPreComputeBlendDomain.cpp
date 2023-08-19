#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsPreComputeBlendDomain.hpp"
URenderSettingsPreComputeBlendDomain* URenderSettingsPreComputeBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPreComputeBlendDomain");
    return (URenderSettingsPreComputeBlendDomain*)res;
}
