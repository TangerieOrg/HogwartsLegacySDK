#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FDayNightEventSystemLastState {
    FDateTime DateTime; // 0x0
    float SunAltitude; // 0x8
    float MoonAltitude; // 0xc
    bool bFirstRun; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
