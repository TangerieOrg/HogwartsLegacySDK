#pragma once
#include <cstdint>
#include "EDayNightEventDirectionTrigger.hpp"
#pragma pack(push, 1)
struct FDayNightSunAltitudeEvent {
    float SunAltitudeDegrees; // 0x0
    EDayNightEventDirectionTrigger DirectionTrigger; // 0x4
    bool bAllowFireOnBeginPlay; // 0x5
    bool bAllowFireOnDiscontinuity; // 0x6
    char pad_7[0x1];
}; // Size: 0x8
#pragma pack(pop)
