#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraExposure.hpp"
#include "FExposureExpressionsExtraExposureConstant.hpp"
#include "FExposureExpressionsExtraScalar.hpp"
#include "FExposureExpressionsExtraScalarConstant.hpp"
#pragma pack(push, 1)
struct FExposureExpressionsExtras {
    TArray<FExposureExpressionsExtraExposureConstant> ExposureConstants; // 0x0
    TArray<FExposureExpressionsExtraExposure> ExposureExtras; // 0x10
    TArray<FExposureExpressionsExtraScalarConstant> ScalarConstants; // 0x20
    TArray<FExposureExpressionsExtraScalar> ScalarExtras; // 0x30
}; // Size: 0x40
#pragma pack(pop)
