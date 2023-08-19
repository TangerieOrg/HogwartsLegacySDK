#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValueLerp : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* ExposureA; // 0x28
    UExposureExpressionsExposureValue* ExposureB; // 0x30
    float Alpha; // 0x38
    char pad_3c[0x4];
    static UExposureExpressionsExposureValueLerp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
