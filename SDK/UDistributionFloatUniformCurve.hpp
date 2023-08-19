#pragma once
#include <cstdint>
#include "FInterpCurveVector2D.hpp"
#include "UDistributionFloat.hpp"
#pragma pack(push, 1)
class UDistributionFloatUniformCurve : public UDistributionFloat {
public:
    FInterpCurveVector2D ConstantCurve; // 0x38
    static UDistributionFloatUniformCurve* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
