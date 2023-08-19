#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainStep.hpp"
URenderSettingsCustomBlendDomainStep* URenderSettingsCustomBlendDomainStep::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainStep");
    return (URenderSettingsCustomBlendDomainStep*)res;
}
