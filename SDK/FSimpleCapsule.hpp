#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSimpleCapsule {
    FVector Origin; // 0x0
    FVector UnitAxis; // 0xc
    float Radius; // 0x18
    float Height; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
