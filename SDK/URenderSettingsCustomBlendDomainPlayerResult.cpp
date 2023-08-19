#include "FName_GameLogicBoolResult.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainPlayerResult.hpp"
URenderSettingsCustomBlendDomainPlayerResult* URenderSettingsCustomBlendDomainPlayerResult::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainPlayerResult");
    return (URenderSettingsCustomBlendDomainPlayerResult*)res;
}
