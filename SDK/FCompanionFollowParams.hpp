#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCompanionFollowParams {
    FVector FollowLocation; // 0x0
    float ReachDistance; // 0xc
    float BufferDistance; // 0x10
    bool bShouldUseTimer; // 0x14
    char pad_15[0x3];
    float movementDelayTimer; // 0x18
    float BypassMovementDelayTimerDistance; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
