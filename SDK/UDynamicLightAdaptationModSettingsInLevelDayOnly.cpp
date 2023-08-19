#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#include "UDynamicLightAdaptationModSettingsInLevelDayOnly.hpp"
UDynamicLightAdaptationModSettingsInLevelDayOnly* UDynamicLightAdaptationModSettingsInLevelDayOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicLightAdaptationModSettingsInLevelDayOnly");
    return (UDynamicLightAdaptationModSettingsInLevelDayOnly*)res;
}
