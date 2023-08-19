#pragma once
#include <cstdint>
#include "ULightSettingsLerpBinary.hpp"
#pragma pack(push, 1)
class ULightSettingsLerpOnOff : public ULightSettingsLerpBinary {
public:
    float Cutoff; // 0x38
    char pad_3c[0x4];
    static ULightSettingsLerpOnOff* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
