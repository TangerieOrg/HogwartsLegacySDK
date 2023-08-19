#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueLerp : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* A; // 0x28
    UExposureExpressionsScalarValue* B; // 0x30
    UExposureExpressionsScalarValue* Alpha; // 0x38
    static UExposureExpressionsScalarValueLerp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
