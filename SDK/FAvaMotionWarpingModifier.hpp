#pragma once
#include <cstdint>
#include "EAvaMotionWarpingModifierState.hpp"
#pragma pack(push, 1)
struct FAvaMotionWarpingModifier {
    char pad_0[0x10];
    float StartTime; // 0x10
    float EndTime; // 0x14
    float PreviousPosition; // 0x18
    float CurrentPosition; // 0x1c
    float weight; // 0x20
    bool bInLocalSpace; // 0x24
    EAvaMotionWarpingModifierState State; // 0x25
    char pad_26[0x2];
}; // Size: 0x28
#pragma pack(pop)
