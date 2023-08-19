#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainNotHDRLinearGamma.hpp"
URenderSettingsCustomBlendDomainNotHDRLinearGamma* URenderSettingsCustomBlendDomainNotHDRLinearGamma::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainNotHDRLinearGamma");
    return (URenderSettingsCustomBlendDomainNotHDRLinearGamma*)res;
}
