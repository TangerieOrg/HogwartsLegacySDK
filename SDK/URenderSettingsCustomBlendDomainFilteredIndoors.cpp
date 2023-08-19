#include "URenderSettingsCustomBlendDomainFilteredIndoors.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainFilteredIndoors* URenderSettingsCustomBlendDomainFilteredIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainFilteredIndoors");
    return (URenderSettingsCustomBlendDomainFilteredIndoors*)res;
}
