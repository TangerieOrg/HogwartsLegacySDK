#include "URenderSettingsCustomBlendDomainFilteredProbeOutdoors.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainFilteredProbeOutdoors* URenderSettingsCustomBlendDomainFilteredProbeOutdoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainFilteredProbeOutdoors");
    return (URenderSettingsCustomBlendDomainFilteredProbeOutdoors*)res;
}
