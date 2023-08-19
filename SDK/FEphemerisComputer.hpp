#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
class UEphemerisBasis;
#pragma pack(push, 1)
struct FEphemerisComputer {
    FEphemerisDayInfo AstronomicalDayInfo; // 0x0
    FEphemerisDayInfo DayInfo; // 0x78
    UEphemerisBasis* Basis; // 0xf0
    char pad_f8[0x50];
}; // Size: 0x148
#pragma pack(pop)
