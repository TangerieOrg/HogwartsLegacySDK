#pragma once
#include <cstdint>
#include "ULightDirectionLerpBinary.hpp"
#pragma pack(push, 1)
class ULightDirectionLerpIfNotZero : public ULightDirectionLerpBinary {
public:
    float Tolerance; // 0x38
    char pad_3c[0x4];
    static ULightDirectionLerpIfNotZero* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
