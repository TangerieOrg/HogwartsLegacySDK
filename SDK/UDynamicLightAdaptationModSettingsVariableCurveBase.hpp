#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsVariableBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableCurveBase : public UDynamicLightAdaptationModSettingsVariableBase {
public:
    UCurveFloat* Curve; // 0x30
    static UDynamicLightAdaptationModSettingsVariableCurveBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
