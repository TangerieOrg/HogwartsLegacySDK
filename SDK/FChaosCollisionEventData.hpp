#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FChaosCollisionEventData {
    FVector Location; // 0x0
    FVector Normal; // 0xc
    FVector Velocity1; // 0x18
    FVector Velocity2; // 0x24
    float Mass1; // 0x30
    float Mass2; // 0x34
    FVector Impulse; // 0x38
    char pad_44[0x14];
}; // Size: 0x58
#pragma pack(pop)
