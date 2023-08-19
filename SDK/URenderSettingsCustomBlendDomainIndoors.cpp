#include "URenderSettingsCustomBlendDomainIndoors.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainIndoors* URenderSettingsCustomBlendDomainIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainIndoors");
    return (URenderSettingsCustomBlendDomainIndoors*)res;
}
