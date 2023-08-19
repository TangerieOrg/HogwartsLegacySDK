#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainBase.hpp"
URenderSettingsCustomBlendDomain* URenderSettingsCustomBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomain");
    return (URenderSettingsCustomBlendDomain*)res;
}
