#include "UInterface.hpp"
#include "UInterface_RenderSettingsCustomBlendDomainOverride.hpp"
UInterface_RenderSettingsCustomBlendDomainOverride* UInterface_RenderSettingsCustomBlendDomainOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.Interface_RenderSettingsCustomBlendDomainOverride");
    return (UInterface_RenderSettingsCustomBlendDomainOverride*)res;
}
