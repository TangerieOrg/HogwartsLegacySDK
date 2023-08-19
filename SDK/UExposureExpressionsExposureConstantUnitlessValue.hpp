#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureConstant.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureConstantUnitlessValue : public UExposureExpressionsExposureConstant {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UExposureExpressionsExposureConstantUnitlessValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
