#include "FGlobalLightingSunColorParams.hpp"
#include "ULightSettingsModFloatBase.hpp"
#include "ULightSettingsModSunLuminance.hpp"
ULightSettingsModSunLuminance* ULightSettingsModSunLuminance::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModSunLuminance");
    return (ULightSettingsModSunLuminance*)res;
}
