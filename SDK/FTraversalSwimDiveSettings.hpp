#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#pragma pack(push, 1)
struct FTraversalSwimDiveSettings {
    ECollisionChannel DeepWaterCollisionChannel; // 0x0
    char pad_1[0x3];
    float FallIntoWaterMinSpeed; // 0x4
    float FallIntoWaterMinTimeToImpact; // 0x8
    float FallIntoWaterMaxTimeToImpact; // 0xc
    float FallIntoWaterMinWaterDepth; // 0x10
    float DiveIntoWaterFwdSpeed; // 0x14
    float DiveIntoWaterUpImpulse; // 0x18
    float DiveIntoWaterImpulseDelay; // 0x1c
    float DiveIntoWaterMaxHeight; // 0x20
    float DiveIntoWaterMinWaterDepth; // 0x24
}; // Size: 0x28
#pragma pack(pop)
