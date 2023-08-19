#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraDefault.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
struct FExposureExpressionsExtraDefaultScalar : public FExposureExpressionsExtraDefault {
    UExposureExpressionsScalarValue* DefaultExpression; // 0x18
}; // Size: 0x20
#pragma pack(pop)
