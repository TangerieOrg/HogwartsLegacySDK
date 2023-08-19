#include "FName_GameLogicVarBool.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPlayerRequirement.hpp"
URenderSettingsCustomBlendDomainPlayerRequirement* URenderSettingsCustomBlendDomainPlayerRequirement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainPlayerRequirement");
    return (URenderSettingsCustomBlendDomainPlayerRequirement*)res;
}
