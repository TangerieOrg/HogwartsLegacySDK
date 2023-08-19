#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#include "UObject.hpp"
UDynamicLightAdaptationModSettingsInterface* UDynamicLightAdaptationModSettingsInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsInterface");
    return (UDynamicLightAdaptationModSettingsInterface*)res;
}
