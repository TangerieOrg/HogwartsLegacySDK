#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#include "UDynamicLightAdaptationModSettingsVariableCurveBase.hpp"
UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase* UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableBlendDomainCurveBase");
    return (UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase*)res;
}
