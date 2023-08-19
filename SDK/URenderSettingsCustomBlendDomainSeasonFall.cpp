#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainSeasonFall.hpp"
URenderSettingsCustomBlendDomainSeasonFall* URenderSettingsCustomBlendDomainSeasonFall::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainSeasonFall");
    return (URenderSettingsCustomBlendDomainSeasonFall*)res;
}
