#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainCurveMapMultiplierConsideration : public UQualifierConsideration {
public:
    FRuntimeFloatCurve Curve; // 0x28
    UQualifierConsideration* Consideration; // 0xb0
    static UChainCurveMapMultiplierConsideration* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
