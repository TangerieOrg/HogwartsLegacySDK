#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExplodingSkeletonInitialDelay {
    float BaseInitialDelay; // 0x0
    float InitialDelayAtMinHeight; // 0x4
    float InitialDelayAtMaxHeight; // 0x8
}; // Size: 0xc
#pragma pack(pop)
