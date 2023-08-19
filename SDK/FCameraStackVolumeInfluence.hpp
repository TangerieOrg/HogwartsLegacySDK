#pragma once
#include <cstdint>
class UCameraStackBehavior;
class UCameraStackBehaviorInfluenceCrossBlend;
#pragma pack(push, 1)
struct FCameraStackVolumeInfluence {
    char pad_0[0x8];
    UCameraStackBehavior* Behavior; // 0x8
    UCameraStackBehaviorInfluenceCrossBlend* CrossBlendBehavior; // 0x10
    UCameraStackBehavior* ExistingBehavior; // 0x18
    char pad_20[0x8];
}; // Size: 0x28
#pragma pack(pop)
