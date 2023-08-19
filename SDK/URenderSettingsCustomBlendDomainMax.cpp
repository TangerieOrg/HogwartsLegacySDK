#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainMax.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
URenderSettingsCustomBlendDomainMax* URenderSettingsCustomBlendDomainMax::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainMax");
    return (URenderSettingsCustomBlendDomainMax*)res;
}
