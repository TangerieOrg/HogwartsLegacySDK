#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueSelect : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    float Constant; // 0x30
    char pad_34[0x4];
    UExposureExpressionsScalarValue* ValueTrue; // 0x38
    UExposureExpressionsScalarValue* ValueFalse; // 0x40
    static UExposureExpressionsScalarValueSelect* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
