#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBoxSphereBounds {
    FVector Origin; // 0x0
    FVector BoxExtent; // 0xc
    float SphereRadius; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
