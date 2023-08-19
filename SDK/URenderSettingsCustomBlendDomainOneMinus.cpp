#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainOneMinus.hpp"
URenderSettingsCustomBlendDomainOneMinus* URenderSettingsCustomBlendDomainOneMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainOneMinus");
    return (URenderSettingsCustomBlendDomainOneMinus*)res;
}
