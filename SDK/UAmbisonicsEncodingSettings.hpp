#pragma once
#include <cstdint>
#include "USoundfieldEncodingSettingsBase.hpp"
#pragma pack(push, 1)
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase {
public:
    int32_t AmbisonicsOrder; // 0x28
    char pad_2c[0x4];
    static UAmbisonicsEncodingSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
