#pragma once
#include <cstdint>
#include "FWeatherDefinitionName.hpp"
#pragma pack(push, 1)
struct FWeatherPhasedPresetEntry {
    FName Phase; // 0x0
    FWeatherDefinitionName Preset; // 0x8
    int32_t Seasons; // 0x18
    bool bInstantChange; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
