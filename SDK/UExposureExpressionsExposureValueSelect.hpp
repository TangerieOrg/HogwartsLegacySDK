#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
class UExposureExpressionsExposureValueSelect : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    float Constant; // 0x30
    char pad_34[0x4];
    UExposureExpressionsExposureValue* ExposureTrue; // 0x38
    UExposureExpressionsExposureValue* ExposureFalse; // 0x40
    static UExposureExpressionsExposureValueSelect* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
