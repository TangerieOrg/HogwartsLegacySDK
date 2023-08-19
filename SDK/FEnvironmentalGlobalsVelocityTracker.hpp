#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsVelocityTracker {
    FVector VelocityDirection; // 0x0
    float Speed; // 0xc
    float AngularVelocity; // 0x10
    FVector LastPosition; // 0x14
    FVector LastForward; // 0x20
    bool bInitialized; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
