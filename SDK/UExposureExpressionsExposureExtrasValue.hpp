#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraExposureName.hpp"
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureExtrasValue : public UExposureExpressionsExposureValue {
public:
    FExposureExpressionsExtraExposureName Value; // 0x28
    static UExposureExpressionsExposureExtrasValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
