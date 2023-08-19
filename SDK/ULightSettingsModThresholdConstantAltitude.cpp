#include "ULightSettingsModThreshold.hpp"
#include "ULightSettingsModThresholdConstantAltitude.hpp"
ULightSettingsModThresholdConstantAltitude* ULightSettingsModThresholdConstantAltitude::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModThresholdConstantAltitude");
    return (ULightSettingsModThresholdConstantAltitude*)res;
}
