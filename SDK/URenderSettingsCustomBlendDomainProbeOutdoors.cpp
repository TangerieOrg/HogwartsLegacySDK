#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainProbeOutdoors.hpp"
URenderSettingsCustomBlendDomainProbeOutdoors* URenderSettingsCustomBlendDomainProbeOutdoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainProbeOutdoors");
    return (URenderSettingsCustomBlendDomainProbeOutdoors*)res;
}
