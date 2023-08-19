#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueOutdoorsDaytime : public UExposureExpressionsScalarValue {
public:
    bool bSmoothed; // 0x28
    char pad_29[0x7];
    static UExposureExpressionsScalarValueOutdoorsDaytime* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
