#include "UInterface.hpp"
#include "UInterface_RenderSettingsCustomBlendDomain.hpp"
UInterface_RenderSettingsCustomBlendDomain* UInterface_RenderSettingsCustomBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.Interface_RenderSettingsCustomBlendDomain");
    return (UInterface_RenderSettingsCustomBlendDomain*)res;
}
