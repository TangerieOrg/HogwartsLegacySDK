#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDayNightCompassParams {
    float RadiusMeters; // 0x0
    float Scale; // 0x4
    float OffsetMeters; // 0x8
    float WorldAzimuthOffsetDegrees; // 0xc
}; // Size: 0x10
#pragma pack(pop)
