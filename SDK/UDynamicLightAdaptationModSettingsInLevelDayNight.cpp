#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#include "UDynamicLightAdaptationModSettingsInLevelDayNight.hpp"
UDynamicLightAdaptationModSettingsInLevelDayNight* UDynamicLightAdaptationModSettingsInLevelDayNight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicLightAdaptationModSettingsInLevelDayNight");
    return (UDynamicLightAdaptationModSettingsInLevelDayNight*)res;
}
