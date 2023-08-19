#include "FRenderSettingsPPProbes.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPProbesSettings.hpp"
URenderSettingsPPProbesSettings* URenderSettingsPPProbesSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPProbesSettings");
    return (URenderSettingsPPProbesSettings*)res;
}
