#pragma once
#include <cstdint>
#include "FExposureExpressionsExtra.hpp"
#include "FExposureExpressionsExtraExposureName.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
struct FExposureExpressionsExtraExposure : public FExposureExpressionsExtra {
    FExposureExpressionsExtraExposureName Name; // 0x8
    UExposureExpressionsExposureValue* Expression; // 0x18
}; // Size: 0x20
#pragma pack(pop)
