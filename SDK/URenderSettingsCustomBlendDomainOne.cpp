#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainOne.hpp"
URenderSettingsCustomBlendDomainOne* URenderSettingsCustomBlendDomainOne::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainOne");
    return (URenderSettingsCustomBlendDomainOne*)res;
}
