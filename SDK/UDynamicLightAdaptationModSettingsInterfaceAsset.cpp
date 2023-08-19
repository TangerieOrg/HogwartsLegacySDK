#include "UDynamicLightAdaptationModSettingsAsset.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#include "UDynamicLightAdaptationModSettingsInterfaceAsset.hpp"
UDynamicLightAdaptationModSettingsInterfaceAsset* UDynamicLightAdaptationModSettingsInterfaceAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsInterfaceAsset");
    return (UDynamicLightAdaptationModSettingsInterfaceAsset*)res;
}
