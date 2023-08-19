#include "ULightSettingsLerpBinary.hpp"
#include "ULightSettingsLerpIfNotZero.hpp"
ULightSettingsLerpIfNotZero* ULightSettingsLerpIfNotZero::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsLerpIfNotZero");
    return (ULightSettingsLerpIfNotZero*)res;
}
