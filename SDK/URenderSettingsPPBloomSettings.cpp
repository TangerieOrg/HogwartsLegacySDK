#include "FRenderSettingsPPBloom.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPBloomSettings.hpp"
URenderSettingsPPBloomSettings* URenderSettingsPPBloomSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPBloomSettings");
    return (URenderSettingsPPBloomSettings*)res;
}
