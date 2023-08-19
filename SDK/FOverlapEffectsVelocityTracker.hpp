#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FOverlapEffectsVelocityTracker {
    FVector VelocityDirection; // 0x0
    float Speed; // 0xc
    float AngularVelocity; // 0x10
    FVector LastPosition; // 0x14
    FVector LastForward; // 0x20
    float LastDistanceMoved; // 0x2c
    bool bInitialized; // 0x30
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
