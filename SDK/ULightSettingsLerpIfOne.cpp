#include "ULightSettingsLerpBinary.hpp"
#include "ULightSettingsLerpIfOne.hpp"
ULightSettingsLerpIfOne* ULightSettingsLerpIfOne::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpIfOne");
    return (ULightSettingsLerpIfOne*)res;
}
