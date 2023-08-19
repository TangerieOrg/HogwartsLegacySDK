#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueMapRangeClamped : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    UExposureExpressionsScalarValue* Min; // 0x30
    UExposureExpressionsScalarValue* Max; // 0x38
    UExposureExpressionsScalarValue* OutMin; // 0x40
    UExposureExpressionsScalarValue* OutMax; // 0x48
    static UExposureExpressionsScalarValueMapRangeClamped* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
