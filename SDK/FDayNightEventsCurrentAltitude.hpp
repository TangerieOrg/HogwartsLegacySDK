#pragma once
#include <cstdint>
#include "EDayNightEventDirection.hpp"
#pragma pack(push, 1)
struct FDayNightEventsCurrentAltitude {
    float Altitude; // 0x0
    EDayNightEventDirection Direction; // 0x4
    bool bValid; // 0x5
    char pad_6[0x2];
}; // Size: 0x8
#pragma pack(pop)
