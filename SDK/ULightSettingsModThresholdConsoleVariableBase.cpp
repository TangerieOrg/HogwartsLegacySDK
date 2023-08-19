#include "ULightSettingsModThreshold.hpp"
#include "ULightSettingsModThresholdConsoleVariableBase.hpp"
ULightSettingsModThresholdConsoleVariableBase* ULightSettingsModThresholdConsoleVariableBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModThresholdConsoleVariableBase");
    return (ULightSettingsModThresholdConsoleVariableBase*)res;
}
