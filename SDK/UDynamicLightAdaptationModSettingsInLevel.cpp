#include "UDynamicLightAdaptationModSettingsInLevel.hpp"
#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
UDynamicLightAdaptationModSettingsInLevel* UDynamicLightAdaptationModSettingsInLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicLightAdaptationModSettingsInLevel");
    return (UDynamicLightAdaptationModSettingsInLevel*)res;
}
