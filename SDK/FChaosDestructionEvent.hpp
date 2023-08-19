#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FChaosDestructionEvent {
    FVector Position; // 0x0
    FVector Normal; // 0xc
    FVector Velocity; // 0x18
    FVector AngularVelocity; // 0x24
    float ExtentMin; // 0x30
    float ExtentMax; // 0x34
    int32_t ParticleID; // 0x38
    float Time; // 0x3c
    int32_t Type; // 0x40
}; // Size: 0x44
#pragma pack(pop)
