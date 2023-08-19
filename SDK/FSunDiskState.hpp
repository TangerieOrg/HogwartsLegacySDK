#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSunDiskState {
    FVector SunDir; // 0x0
    float SunAltitudeAngle; // 0xc
    float SunAzimuthAngle; // 0x10
    float SunIllusionScale; // 0x14
    bool bValid; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
