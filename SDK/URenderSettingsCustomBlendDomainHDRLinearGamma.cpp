#include "URenderSettingsCustomBlendDomainHDRLinearGamma.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainHDRLinearGamma* URenderSettingsCustomBlendDomainHDRLinearGamma::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainHDRLinearGamma");
    return (URenderSettingsCustomBlendDomainHDRLinearGamma*)res;
}
