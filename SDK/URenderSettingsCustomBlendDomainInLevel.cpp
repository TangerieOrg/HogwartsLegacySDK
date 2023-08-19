#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainInLevel.hpp"
URenderSettingsCustomBlendDomainInLevel* URenderSettingsCustomBlendDomainInLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainInLevel");
    return (URenderSettingsCustomBlendDomainInLevel*)res;
}
