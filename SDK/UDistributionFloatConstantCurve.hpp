#pragma once
#include <cstdint>
#include "FInterpCurveFloat.hpp"
#include "UDistributionFloat.hpp"
#pragma pack(push, 1)
class UDistributionFloatConstantCurve : public UDistributionFloat {
public:
    FInterpCurveFloat ConstantCurve; // 0x38
    static UDistributionFloatConstantCurve* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
