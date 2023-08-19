#pragma once
#include <cstdint>
#include "FExposureExpressionsExtra.hpp"
#include "FExposureExpressionsExtraScalarName.hpp"
#pragma pack(push, 1)
struct FExposureExpressionsExtraScalarConstant : public FExposureExpressionsExtra {
    FExposureExpressionsExtraScalarName Name; // 0x8
    float Value; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
