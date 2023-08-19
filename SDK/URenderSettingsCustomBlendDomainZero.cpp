#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainZero.hpp"
URenderSettingsCustomBlendDomainZero* URenderSettingsCustomBlendDomainZero::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainZero");
    return (URenderSettingsCustomBlendDomainZero*)res;
}
