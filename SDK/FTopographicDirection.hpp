#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FTopographicDirection {
    FVector Direction; // 0x0
    float AzimuthDegrees; // 0xc
    float AltitudeDegrees; // 0x10
}; // Size: 0x14
#pragma pack(pop)
