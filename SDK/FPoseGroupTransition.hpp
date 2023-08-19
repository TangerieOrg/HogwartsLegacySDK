#pragma once
#include <cstdint>
class UPoseGroup;
class UAnimationAsset;
class UAnimationProvider;
#pragma pack(push, 1)
struct FPoseGroupTransition {
    UPoseGroup* EndState; // 0x0
    UAnimationAsset* TransitionAnim; // 0x8
    UAnimationProvider* TransitionAnimation; // 0x10
    bool bBlockLayeredAnimations; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
