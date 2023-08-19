#include "URenderSettingsCustomBlendDomainSecondaryWorld.hpp"
#include "URenderSettingsCustomBlendDomainSecondaryWorldSmoothed.hpp"
URenderSettingsCustomBlendDomainSecondaryWorldSmoothed* URenderSettingsCustomBlendDomainSecondaryWorldSmoothed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainSecondaryWorldSmoothed");
    return (URenderSettingsCustomBlendDomainSecondaryWorldSmoothed*)res;
}
