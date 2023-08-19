#pragma once
#include <cstdint>
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueScalarCurve : public UGlobalLightingCustomBlendablesValue {
public:
    FGlobalLightingCustomBlendableNameScalar Name; // 0x28
    FGlobalLightRigWorldModDriverName Source; // 0x38
    UCurveFloat* Curve; // 0x40
    static UGlobalLightingCustomBlendablesValueScalarCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
