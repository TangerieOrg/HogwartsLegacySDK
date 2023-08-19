#pragma once
#include <cstdint>
#include "EDayNightEventDirectionTrigger.hpp"
#include "EMoonPhaseName.hpp"
#pragma pack(push, 1)
struct FDayNightMoonAltitudeEvent {
    float MoonAltitudeDegrees; // 0x0
    EMoonPhaseName MoonPhase; // 0x4
    char pad_5[0x3];
    float NightThreshold; // 0x8
    EDayNightEventDirectionTrigger DirectionTrigger; // 0xc
    bool bAllowFireOnBeginPlay; // 0xd
    bool bAllowFireOnDiscontinuity; // 0xe
    bool bUseMoonPhase; // 0xf
    bool bUseNightThreshold; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
