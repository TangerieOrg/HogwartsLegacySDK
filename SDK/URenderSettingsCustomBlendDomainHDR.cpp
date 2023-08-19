#include "URenderSettingsCustomBlendDomainHDR.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainHDR* URenderSettingsCustomBlendDomainHDR::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainHDR");
    return (URenderSettingsCustomBlendDomainHDR*)res;
}
