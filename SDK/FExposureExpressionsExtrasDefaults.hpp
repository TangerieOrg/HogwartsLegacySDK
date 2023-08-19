#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraDefaultExposure.hpp"
#include "FExposureExpressionsExtraDefaultExposureConstant.hpp"
#include "FExposureExpressionsExtraDefaultScalar.hpp"
#include "FExposureExpressionsExtraDefaultScalarConstant.hpp"
#pragma pack(push, 1)
struct FExposureExpressionsExtrasDefaults {
    TArray<FExposureExpressionsExtraDefaultExposureConstant> ExposureConstants; // 0x0
    TArray<FExposureExpressionsExtraDefaultExposure> ExposureExtras; // 0x10
    TArray<FExposureExpressionsExtraDefaultScalarConstant> ScalarConstants; // 0x20
    TArray<FExposureExpressionsExtraDefaultScalar> ScalarExtras; // 0x30
}; // Size: 0x40
#pragma pack(pop)
