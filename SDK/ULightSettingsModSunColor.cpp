#include "FGlobalLightingSunColorParams.hpp"
#include "ULightSettingsModColorBase.hpp"
#include "ULightSettingsModSunColor.hpp"
ULightSettingsModSunColor* ULightSettingsModSunColor::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModSunColor");
    return (ULightSettingsModSunColor*)res;
}
