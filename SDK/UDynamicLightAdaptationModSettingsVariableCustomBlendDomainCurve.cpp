#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#include "UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve.hpp"
UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve* UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve");
    return (UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve*)res;
}
