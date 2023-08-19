#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#include "UDynamicLightAdaptationModSettingsInLevelNightOnly.hpp"
UDynamicLightAdaptationModSettingsInLevelNightOnly* UDynamicLightAdaptationModSettingsInLevelNightOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicLightAdaptationModSettingsInLevelNightOnly");
    return (UDynamicLightAdaptationModSettingsInLevelNightOnly*)res;
}
