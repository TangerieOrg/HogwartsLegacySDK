#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainSeasonSpring.hpp"
URenderSettingsCustomBlendDomainSeasonSpring* URenderSettingsCustomBlendDomainSeasonSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainSeasonSpring");
    return (URenderSettingsCustomBlendDomainSeasonSpring*)res;
}
