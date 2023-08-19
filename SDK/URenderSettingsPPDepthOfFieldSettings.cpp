#include "FRenderSettingsPPDepthOfField.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPDepthOfFieldSettings.hpp"
URenderSettingsPPDepthOfFieldSettings* URenderSettingsPPDepthOfFieldSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPDepthOfFieldSettings");
    return (URenderSettingsPPDepthOfFieldSettings*)res;
}
