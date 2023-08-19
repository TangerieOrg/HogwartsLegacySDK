#include "URenderSettingsCustomBlendDomainFilteredProbeIndoors.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainFilteredProbeIndoors* URenderSettingsCustomBlendDomainFilteredProbeIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainFilteredProbeIndoors");
    return (URenderSettingsCustomBlendDomainFilteredProbeIndoors*)res;
}
