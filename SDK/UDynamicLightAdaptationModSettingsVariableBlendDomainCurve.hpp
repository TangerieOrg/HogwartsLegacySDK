#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableBlendDomainCurve : public UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
public:
    FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x40
    static UDynamicLightAdaptationModSettingsVariableBlendDomainCurve* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
