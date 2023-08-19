#include "FRenderSettingsPPColorGrading.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPColorGradingSettings.hpp"
URenderSettingsPPColorGradingSettings* URenderSettingsPPColorGradingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPColorGradingSettings");
    return (URenderSettingsPPColorGradingSettings*)res;
}
