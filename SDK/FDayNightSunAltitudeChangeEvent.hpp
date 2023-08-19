#pragma once
#include <cstdint>
#include "EDayNightEventDirectionTrigger.hpp"
#pragma pack(push, 1)
struct FDayNightSunAltitudeChangeEvent {
    float SunAltitudeChangeDegrees; // 0x0
    EDayNightEventDirectionTrigger Direction; // 0x4
    char pad_5[0x3];
    float SunMinAltitudeDegrees; // 0x8
    float SunMaxAltitudeDegrees; // 0xc
    bool bAllowFireOnBeginPlay; // 0x10
    bool bAllowFireOnDiscontinuity; // 0x11
    char pad_12[0x2];
}; // Size: 0x14
#pragma pack(pop)
