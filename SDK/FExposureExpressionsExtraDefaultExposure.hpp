#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraDefault.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
struct FExposureExpressionsExtraDefaultExposure : public FExposureExpressionsExtraDefault {
    UExposureExpressionsExposureValue* DefaultExpression; // 0x18
}; // Size: 0x20
#pragma pack(pop)
