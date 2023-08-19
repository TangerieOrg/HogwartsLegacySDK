#pragma once
#include <cstdint>
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueLinearColorCurve : public UGlobalLightingCustomBlendablesValue {
public:
    FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28
    FGlobalLightRigWorldModDriverName Source; // 0x38
    UCurveLinearColor* Curve; // 0x40
    static UGlobalLightingCustomBlendablesValueLinearColorCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
