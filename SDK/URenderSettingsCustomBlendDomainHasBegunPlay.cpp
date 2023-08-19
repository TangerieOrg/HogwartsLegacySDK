#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainHasBegunPlay.hpp"
URenderSettingsCustomBlendDomainHasBegunPlay* URenderSettingsCustomBlendDomainHasBegunPlay::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainHasBegunPlay");
    return (URenderSettingsCustomBlendDomainHasBegunPlay*)res;
}
