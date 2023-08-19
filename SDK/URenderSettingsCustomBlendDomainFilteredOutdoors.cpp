#include "URenderSettingsCustomBlendDomainFilteredOutdoors.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainFilteredOutdoors* URenderSettingsCustomBlendDomainFilteredOutdoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainFilteredOutdoors");
    return (URenderSettingsCustomBlendDomainFilteredOutdoors*)res;
}
