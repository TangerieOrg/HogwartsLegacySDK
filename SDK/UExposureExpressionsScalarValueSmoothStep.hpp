#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueSmoothStep : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    UExposureExpressionsScalarValue* Min; // 0x30
    UExposureExpressionsScalarValue* Max; // 0x38
    static UExposureExpressionsScalarValueSmoothStep* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
