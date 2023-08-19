#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve : public UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase {
public:
    FName BlendDomain; // 0x40
    static UDynamicLightAdaptationModSettingsVariableRawBlendDomainCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
