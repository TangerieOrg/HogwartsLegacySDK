#include "FRenderSettingsPPExposure.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPExposureSettings.hpp"
URenderSettingsPPExposureSettings* URenderSettingsPPExposureSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPExposureSettings");
    return (URenderSettingsPPExposureSettings*)res;
}
