#pragma once
#include <cstdint>
class UAnimationAsset;
#pragma pack(push, 1)
struct FBaseArchitectTransition {
    char pad_0[0x8];
    UAnimationAsset* TransitionAnim; // 0x8
}; // Size: 0x10
#pragma pack(pop)
