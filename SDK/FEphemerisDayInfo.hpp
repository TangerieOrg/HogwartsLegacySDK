#pragma once
#include <cstdint>
#include "FAziAltTime.hpp"
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FEphemerisDayInfo {
    FDateTime Date; // 0x0
    FAziAltTime SunRise; // 0x8
    FAziAltTime SunSet; // 0x18
    FAziAltTime SolarTransit; // 0x28
    FAziAltTime SolarMidnight; // 0x38
    FTimespan DayLength; // 0x48
    FTimespan SunRiseTime; // 0x50
    FTimespan SunSetTime; // 0x58
    FTimespan SolarTransitTime; // 0x60
    FTimespan SolarMidnightTime; // 0x68
    bool bSunRiseValid; // 0x70
    bool bSunSetValid; // 0x71
    char pad_72[0x6];
}; // Size: 0x78
#pragma pack(pop)
