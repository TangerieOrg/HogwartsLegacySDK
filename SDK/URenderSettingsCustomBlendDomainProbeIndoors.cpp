#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainProbeIndoors.hpp"
URenderSettingsCustomBlendDomainProbeIndoors* URenderSettingsCustomBlendDomainProbeIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainProbeIndoors");
    return (URenderSettingsCustomBlendDomainProbeIndoors*)res;
}
