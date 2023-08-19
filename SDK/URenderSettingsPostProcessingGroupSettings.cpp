#include "FRenderSettingsPostProcessingGroup.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPostProcessingGroupSettings.hpp"
URenderSettingsPostProcessingGroupSettings* URenderSettingsPostProcessingGroupSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPostProcessingGroupSettings");
    return (URenderSettingsPostProcessingGroupSettings*)res;
}
