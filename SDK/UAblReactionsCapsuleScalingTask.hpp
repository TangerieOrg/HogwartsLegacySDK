#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblReactionsCapsuleScalingTask : public UAblAbilityTask {
public:
    bool bUseHeightAsRadius; // 0x70
    char pad_71[0x3];
    float RadiusMultiplier; // 0x74
    float HalfHeightMultiplier; // 0x78
    bool bRestoreAtEndTask; // 0x7c
    char pad_7d[0x3];
    FAlphaBlend BlendTime; // 0x80
    static UAblReactionsCapsuleScalingTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
