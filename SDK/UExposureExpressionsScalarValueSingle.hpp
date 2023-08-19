#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueSingle : public UExposureExpressionsScalarValue {
public:
    UExposureExpressionsScalarValue* Value; // 0x28
    static UExposureExpressionsScalarValueSingle* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
