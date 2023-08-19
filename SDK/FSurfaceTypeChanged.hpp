#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSurfaceTypeChanged {
    EPhysicalSurface LastSurfaceType; // 0x0
    EPhysicalSurface NewSurfaceType; // 0x1
    char pad_2[0x2];
    FVector Normal; // 0x4
    float Friction; // 0x10
}; // Size: 0x14
#pragma pack(pop)
