#include "FRenderSettingsPPMotionBlur.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPMotionBlurSettings.hpp"
URenderSettingsPPMotionBlurSettings* URenderSettingsPPMotionBlurSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPMotionBlurSettings");
    return (URenderSettingsPPMotionBlurSettings*)res;
}
