#pragma once
#include <cstdint>
#include "EGroomCacheType.hpp"
#include "FGroomAnimationInfo.hpp"
#pragma pack(push, 1)
struct FGroomCacheInfo {
    int32_t Version; // 0x0
    EGroomCacheType Type; // 0x4
    char pad_5[0x3];
    FGroomAnimationInfo AnimationInfo; // 0x8
}; // Size: 0x28
#pragma pack(pop)
