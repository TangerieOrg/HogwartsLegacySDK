#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainSeasonSummer.hpp"
URenderSettingsCustomBlendDomainSeasonSummer* URenderSettingsCustomBlendDomainSeasonSummer::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainSeasonSummer");
    return (URenderSettingsCustomBlendDomainSeasonSummer*)res;
}
