#include "UCurveFloat.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBase.hpp"
#include "UDynamicLightAdaptationModSettingsVariableCurveBase.hpp"
UDynamicLightAdaptationModSettingsVariableCurveBase* UDynamicLightAdaptationModSettingsVariableCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableCurveBase");
    return (UDynamicLightAdaptationModSettingsVariableCurveBase*)res;
}
