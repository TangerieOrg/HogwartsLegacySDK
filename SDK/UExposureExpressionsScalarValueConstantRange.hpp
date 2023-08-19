#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValueConstantBase.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueConstantRange : public UExposureExpressionsScalarValueConstantBase {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UExposureExpressionsScalarValueConstantRange* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
