#include "URenderSettingsCustomBlendDomainBase.hpp"
#include "URenderSettingsCustomBlendDomainSeason.hpp"
URenderSettingsCustomBlendDomainSeason* URenderSettingsCustomBlendDomainSeason::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainSeason");
    return (URenderSettingsCustomBlendDomainSeason*)res;
}
