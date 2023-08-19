#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsBlendDomainScalarValue : public UExposureExpressionsScalarValue {
public:
    float DefaultValue; // 0x28
    char pad_2c[0x4];
    static UExposureExpressionsBlendDomainScalarValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
