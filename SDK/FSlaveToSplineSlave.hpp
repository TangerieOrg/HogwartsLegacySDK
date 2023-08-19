#pragma once
#include <cstdint>
#include "ESlaveToSplineUpdateMode.hpp"
class AActor;
#pragma pack(push, 1)
struct FSlaveToSplineSlave {
    AActor* Slave; // 0x0
    ESlaveToSplineUpdateMode Mode; // 0x8
    char pad_9[0x3];
    float DurationFactor; // 0xc
    float SplineT; // 0x10
    float SplineTReset; // 0x14
    bool bUseConstantVelocity; // 0x18
    bool bPositionOnly; // 0x19
    bool bIncludeScale; // 0x1a
    bool bReverseDirection; // 0x1b
    bool bDisableCollision; // 0x1c
    bool bFollowEnabled; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
