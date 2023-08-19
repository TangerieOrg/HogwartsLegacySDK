#pragma once
#include <cstdint>
#include "FExposureExpressionsExposureExpressionName.hpp"
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsGlobalExposureExpression : public UExposureExpressionsExposureValue {
public:
    FExposureExpressionsExposureExpressionName GlobalExpression; // 0x28
    static UExposureExpressionsGlobalExposureExpression* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
