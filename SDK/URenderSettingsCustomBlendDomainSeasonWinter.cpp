#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#include "URenderSettingsCustomBlendDomainSeasonWinter.hpp"
URenderSettingsCustomBlendDomainSeasonWinter* URenderSettingsCustomBlendDomainSeasonWinter::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainSeasonWinter");
    return (URenderSettingsCustomBlendDomainSeasonWinter*)res;
}
