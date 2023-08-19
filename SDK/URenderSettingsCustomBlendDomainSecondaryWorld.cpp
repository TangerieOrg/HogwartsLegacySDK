#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainSecondaryWorld.hpp"
URenderSettingsCustomBlendDomainSecondaryWorld* URenderSettingsCustomBlendDomainSecondaryWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainSecondaryWorld");
    return (URenderSettingsCustomBlendDomainSecondaryWorld*)res;
}
