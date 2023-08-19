#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNavCollisionCylinder {
    FVector Offset; // 0x0
    float Radius; // 0xc
    float Height; // 0x10
}; // Size: 0x14
#pragma pack(pop)
