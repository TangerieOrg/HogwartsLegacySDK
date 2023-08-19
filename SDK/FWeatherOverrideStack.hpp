#pragma once
#include <cstdint>
#include "FWeatherOverrideStackEntry.hpp"
#pragma pack(push, 1)
struct FWeatherOverrideStack {
    TArray<FWeatherOverrideStackEntry> Presets; // 0x0
}; // Size: 0x10
#pragma pack(pop)
