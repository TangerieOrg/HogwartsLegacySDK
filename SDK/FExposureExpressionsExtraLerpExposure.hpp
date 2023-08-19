#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraLerp.hpp"
#pragma pack(push, 1)
struct FExposureExpressionsExtraLerpExposure : public FExposureExpressionsExtraLerp {
    float CachedFactor; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
