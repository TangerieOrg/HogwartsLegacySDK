#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainNotHDR.hpp"
URenderSettingsCustomBlendDomainNotHDR* URenderSettingsCustomBlendDomainNotHDR::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainNotHDR");
    return (URenderSettingsCustomBlendDomainNotHDR*)res;
}
