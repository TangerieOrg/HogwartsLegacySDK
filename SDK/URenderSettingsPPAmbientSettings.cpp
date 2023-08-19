#include "FRenderSettingsPPAmbient.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPAmbientSettings.hpp"
URenderSettingsPPAmbientSettings* URenderSettingsPPAmbientSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPAmbientSettings");
    return (URenderSettingsPPAmbientSettings*)res;
}
