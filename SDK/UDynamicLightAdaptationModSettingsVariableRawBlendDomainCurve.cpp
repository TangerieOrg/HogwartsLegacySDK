#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#include "UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve.hpp"
UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve* UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableRawBlendDomainCurve");
    return (UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve*)res;
}
