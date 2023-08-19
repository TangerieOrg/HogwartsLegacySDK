#pragma once
#include <cstdint>
#include "EObjectFadeCompletedAction.hpp"
#include "FObjectFadeParams.hpp"
#pragma pack(push, 1)
struct FObjectfade {
    char pad_0[0x10];
    FObjectFadeParams Params; // 0x10
    float TimeFactor; // 0xa0
    float Age; // 0xa4
    float Opacity; // 0xa8
    float Delay; // 0xac
    EObjectFadeCompletedAction FadeCompletedAction; // 0xb0
    uint8_t bDone : 1; // 0xb1
    uint8_t bReverseTime : 1; // 0xb1
    uint8_t bHiddenAtEnd : 1; // 0xb1
    uint8_t pad_bitfield_b1_3 : 5;
    char pad_b2[0x6];
}; // Size: 0xb8
#pragma pack(pop)
