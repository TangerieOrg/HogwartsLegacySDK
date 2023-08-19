#pragma once
#include <cstdint>
#include "EGroomCacheAttributes.hpp"
#pragma pack(push, 1)
struct FGroomAnimationInfo {
    uint32_t NumFrames; // 0x0
    float SecondsPerFrame; // 0x4
    float Duration; // 0x8
    float StartTime; // 0xc
    float EndTime; // 0x10
    int32_t StartFrame; // 0x14
    int32_t EndFrame; // 0x18
    EGroomCacheAttributes Attributes; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
