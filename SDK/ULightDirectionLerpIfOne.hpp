#pragma once
#include <cstdint>
#include "ULightDirectionLerpBinary.hpp"
#pragma pack(push, 1)
class ULightDirectionLerpIfOne : public ULightDirectionLerpBinary {
public:
    float Tolerance; // 0x38
    char pad_3c[0x4];
    static ULightDirectionLerpIfOne* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
