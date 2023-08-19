#include "ULightSettingsModThresholdConsoleVariableAltitude.hpp"
#include "ULightSettingsModThresholdConsoleVariableBase.hpp"
ULightSettingsModThresholdConsoleVariableAltitude* ULightSettingsModThresholdConsoleVariableAltitude::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModThresholdConsoleVariableAltitude");
    return (ULightSettingsModThresholdConsoleVariableAltitude*)res;
}
