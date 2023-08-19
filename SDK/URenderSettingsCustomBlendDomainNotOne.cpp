#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainNotOne.hpp"
URenderSettingsCustomBlendDomainNotOne* URenderSettingsCustomBlendDomainNotOne::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainNotOne");
    return (URenderSettingsCustomBlendDomainNotOne*)res;
}
