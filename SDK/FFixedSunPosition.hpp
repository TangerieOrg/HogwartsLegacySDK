#pragma once
#include <cstdint>
#include "EFixedSunPositionType.hpp"
#include "FTimespan.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFixedSunPosition {
    EFixedSunPositionType Type; // 0x0
    char pad_1[0x3];
    FVector Direction; // 0x4
    float AltitudeDegrees; // 0x10
    float AzimuthDegrees; // 0x14
    FTimespan StartTime; // 0x18
    FTimespan EndTime; // 0x20
}; // Size: 0x28
#pragma pack(pop)
