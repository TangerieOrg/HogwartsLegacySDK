#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainWithOverrides.hpp"
URenderSettingsCustomBlendDomainWithOverrides* URenderSettingsCustomBlendDomainWithOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainWithOverrides");
    return (URenderSettingsCustomBlendDomainWithOverrides*)res;
}
