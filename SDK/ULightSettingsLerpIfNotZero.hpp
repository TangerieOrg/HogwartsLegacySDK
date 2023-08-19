#pragma once
#include <cstdint>
#include "ULightSettingsLerpBinary.hpp"
#pragma pack(push, 1)
class ULightSettingsLerpIfNotZero : public ULightSettingsLerpBinary {
public:
    float Tolerance; // 0x38
    char pad_3c[0x4];
    static ULightSettingsLerpIfNotZero* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
