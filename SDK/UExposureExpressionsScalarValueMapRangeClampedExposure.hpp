#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
class UExposureExpressionsScalarValueMapRangeClampedExposure : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    UExposureExpressionsScalarValue* Min; // 0x30
    UExposureExpressionsScalarValue* Max; // 0x38
    UExposureExpressionsExposureValue* ExposureMin; // 0x40
    UExposureExpressionsExposureValue* ExposureMax; // 0x48
    static UExposureExpressionsScalarValueMapRangeClampedExposure* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
