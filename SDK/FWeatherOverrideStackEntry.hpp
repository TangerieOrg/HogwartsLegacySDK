#pragma once
#include <cstdint>
#include "FWeatherSequenceName.hpp"
#pragma pack(push, 1)
struct FWeatherOverrideStackEntry {
    char pad_0[0x8];
    FWeatherSequenceName Preset; // 0x8
    float PlaybackScale; // 0x18
    bool bInstantSwitch; // 0x1c
    bool bRestorePriorWeather; // 0x1d
    bool bRestorePriorWeatherInstant; // 0x1e
    char pad_1f[0x1];
    int32_t PriorityBoost; // 0x20
    int32_t UniqueId; // 0x24
}; // Size: 0x28
#pragma pack(pop)
