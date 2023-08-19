#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainOutdoors.hpp"
URenderSettingsCustomBlendDomainOutdoors* URenderSettingsCustomBlendDomainOutdoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainOutdoors");
    return (URenderSettingsCustomBlendDomainOutdoors*)res;
}
