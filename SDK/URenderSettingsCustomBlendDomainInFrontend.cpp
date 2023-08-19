#include "URenderSettingsCustomBlendDomainInFrontend.hpp"
#include "URenderSettingsCustomBlendDomainInLevel.hpp"
URenderSettingsCustomBlendDomainInFrontend* URenderSettingsCustomBlendDomainInFrontend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainInFrontend");
    return (URenderSettingsCustomBlendDomainInFrontend*)res;
}
