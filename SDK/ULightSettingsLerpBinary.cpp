#include "ULightSettingsLerpBinary.hpp"
#include "ULightSettingsLerpControl.hpp"
ULightSettingsLerpBinary* ULightSettingsLerpBinary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpBinary");
    return (ULightSettingsLerpBinary*)res;
}
