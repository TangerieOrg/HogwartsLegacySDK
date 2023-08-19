#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurve.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
UDynamicLightAdaptationModSettingsVariableBlendDomainCurve* UDynamicLightAdaptationModSettingsVariableBlendDomainCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableBlendDomainCurve");
    return (UDynamicLightAdaptationModSettingsVariableBlendDomainCurve*)res;
}
