#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValuePair : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* A; // 0x28
    UExposureExpressionsScalarValue* B; // 0x30
    static UExposureExpressionsScalarValuePair* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
