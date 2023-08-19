#include "ULightSettingsLerpBinary.hpp"
#include "ULightSettingsLerpOnOff.hpp"
ULightSettingsLerpOnOff* ULightSettingsLerpOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpOnOff");
    return (ULightSettingsLerpOnOff*)res;
}
