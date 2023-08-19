#pragma once
#include <cstdint>
#include "FWeatherWorldTime.hpp"
#pragma pack(push, 1)
struct FWeatherWorldTimeEditor : public FWeatherWorldTime {
    char pad_20[0x18];
}; // Size: 0x38
#pragma pack(pop)
