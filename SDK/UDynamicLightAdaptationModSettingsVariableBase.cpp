#include "ELightAdapatationModOp.hpp"
#include "ELightAdapatationProperty.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBase.hpp"
UDynamicLightAdaptationModSettingsVariableBase* UDynamicLightAdaptationModSettingsVariableBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableBase");
    return (UDynamicLightAdaptationModSettingsVariableBase*)res;
}
