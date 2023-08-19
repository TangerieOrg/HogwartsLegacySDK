#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainRemap.hpp"
URenderSettingsCustomBlendDomainRemap* URenderSettingsCustomBlendDomainRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainRemap");
    return (URenderSettingsCustomBlendDomainRemap*)res;
}
