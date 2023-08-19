#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve : public UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
public:
    FRenderSettingsCustomBlendDomainName CustomBlendDomain; // 0x40
    static UDynamicLightAdaptationModSettingsVariableCustomBlendDomainCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
