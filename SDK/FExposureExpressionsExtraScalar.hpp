#pragma once
#include <cstdint>
#include "FExposureExpressionsExtra.hpp"
#include "FExposureExpressionsExtraScalarName.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
struct FExposureExpressionsExtraScalar : public FExposureExpressionsExtra {
    FExposureExpressionsExtraScalarName Name; // 0x8
    UExposureExpressionsScalarValue* Expression; // 0x18
}; // Size: 0x20
#pragma pack(pop)
