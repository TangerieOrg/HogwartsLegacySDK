#include "FRenderSettingsPPScreenSpaceReflections.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPScreenSpaceReflectionsSettings.hpp"
URenderSettingsPPScreenSpaceReflectionsSettings* URenderSettingsPPScreenSpaceReflectionsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPScreenSpaceReflectionsSettings");
    return (URenderSettingsPPScreenSpaceReflectionsSettings*)res;
}
