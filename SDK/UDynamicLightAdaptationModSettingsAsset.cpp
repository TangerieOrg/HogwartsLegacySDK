#include "UDataAsset.hpp"
#include "UDynamicLightAdaptationModSettingsAsset.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
UDynamicLightAdaptationModSettingsAsset* UDynamicLightAdaptationModSettingsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsAsset");
    return (UDynamicLightAdaptationModSettingsAsset*)res;
}
