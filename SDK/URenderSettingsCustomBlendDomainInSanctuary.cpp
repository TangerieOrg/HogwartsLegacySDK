#include "URenderSettingsCustomBlendDomainInLevel.hpp"
#include "URenderSettingsCustomBlendDomainInSanctuary.hpp"
URenderSettingsCustomBlendDomainInSanctuary* URenderSettingsCustomBlendDomainInSanctuary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainInSanctuary");
    return (URenderSettingsCustomBlendDomainInSanctuary*)res;
}
