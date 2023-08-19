#include "FLerpVolumesScalarName.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#include "ULumosDynamicLightAdaptationModSettingsInterface.hpp"
ULumosDynamicLightAdaptationModSettingsInterface* ULumosDynamicLightAdaptationModSettingsInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosDynamicLightAdaptationModSettingsInterface");
    return (ULumosDynamicLightAdaptationModSettingsInterface*)res;
}
