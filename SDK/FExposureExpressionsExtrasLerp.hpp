#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraLerpExposure.hpp"
#include "FExposureExpressionsExtraLerpScalar.hpp"
#pragma pack(push, 1)
struct FExposureExpressionsExtrasLerp {
    TArray<FExposureExpressionsExtraLerpExposure> ExposureExtras; // 0x0
    TArray<FExposureExpressionsExtraLerpScalar> ScalarExtras; // 0x10
}; // Size: 0x20
#pragma pack(pop)
