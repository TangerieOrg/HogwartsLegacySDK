#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainNoPreCompute* URenderSettingsCustomBlendDomainNoPreCompute::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainNoPreCompute");
    return (URenderSettingsCustomBlendDomainNoPreCompute*)res;
}
