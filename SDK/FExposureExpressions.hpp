#pragma once
#include <cstdint>
#include "FExposureExpressionsExposureExpression.hpp"
#include "FExposureExpressionsScalarExpression.hpp"
#pragma pack(push, 1)
struct FExposureExpressions {
    char pad_0[0x50];
    TArray<FExposureExpressionsExposureExpression> ExposureExpressions; // 0x50
    char pad_60[0x50];
    TArray<FExposureExpressionsScalarExpression> ScalarExpressions; // 0xb0
}; // Size: 0xc0
#pragma pack(pop)
