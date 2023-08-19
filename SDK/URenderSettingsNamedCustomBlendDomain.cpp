#include "URenderSettingsNamedCustomBlendDomain.hpp"
#include "URenderSettingsNamedCustomBlendDomainBase.hpp"
URenderSettingsNamedCustomBlendDomain* URenderSettingsNamedCustomBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsNamedCustomBlendDomain");
    return (URenderSettingsNamedCustomBlendDomain*)res;
}
