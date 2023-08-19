#pragma once
#include <cstdint>
#include "FExposureExpressionsScalarExpressionName.hpp"
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsGlobalScalarExpression : public UExposureExpressionsScalarValue {
public:
    FExposureExpressionsScalarExpressionName GlobalExpression; // 0x28
    static UExposureExpressionsGlobalScalarExpression* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
