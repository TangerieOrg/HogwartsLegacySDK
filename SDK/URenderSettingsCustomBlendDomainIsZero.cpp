#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainIsZero.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainIsZero* URenderSettingsCustomBlendDomainIsZero::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainIsZero");
    return (URenderSettingsCustomBlendDomainIsZero*)res;
}
