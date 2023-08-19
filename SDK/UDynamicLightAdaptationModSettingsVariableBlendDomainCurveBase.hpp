#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsVariableCurveBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase : public UDynamicLightAdaptationModSettingsVariableCurveBase {
public:
    float DefaultValueIfMissing; // 0x38
    bool bUseCamera; // 0x3c
    char pad_3d[0x3];
    static UDynamicLightAdaptationModSettingsVariableBlendDomainCurveBase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
