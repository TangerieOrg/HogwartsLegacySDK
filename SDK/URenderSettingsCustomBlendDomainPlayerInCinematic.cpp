#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPlayerInCinematic.hpp"
URenderSettingsCustomBlendDomainPlayerInCinematic* URenderSettingsCustomBlendDomainPlayerInCinematic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainPlayerInCinematic");
    return (URenderSettingsCustomBlendDomainPlayerInCinematic*)res;
}
