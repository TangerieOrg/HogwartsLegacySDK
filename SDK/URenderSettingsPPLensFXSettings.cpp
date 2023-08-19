#include "FRenderSettingsPPLensFX.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPLensFXSettings.hpp"
URenderSettingsPPLensFXSettings* URenderSettingsPPLensFXSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPLensFXSettings");
    return (URenderSettingsPPLensFXSettings*)res;
}
