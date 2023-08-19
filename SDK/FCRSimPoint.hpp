#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCRSimPoint {
    float Mass; // 0x0
    float Size; // 0x4
    float LinearDamping; // 0x8
    float InheritMotion; // 0xc
    FVector Position; // 0x10
    FVector LinearVelocity; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
