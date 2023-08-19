#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTopographicObserver {
    float LatitudeDegrees; // 0x0
    float LongitudeDegrees; // 0x4
    int32_t TimeZone; // 0x8
    float AltitudeMeters; // 0xc
    float WorldAzimuthOffsetDegrees; // 0x10
}; // Size: 0x14
#pragma pack(pop)
