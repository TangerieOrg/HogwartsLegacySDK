#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
class UExposureExpressionsExposureValueLerpWithAlpha : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* ExposureA; // 0x28
    UExposureExpressionsExposureValue* ExposureB; // 0x30
    UExposureExpressionsScalarValue* Alpha; // 0x38
    static UExposureExpressionsExposureValueLerpWithAlpha* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
