#pragma once
#include <cstdint>
#include "EAnimationDirectionSource.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablIKBlendTask : public UAblAbilityTask {
public:
    bool bDisableAllIK; // 0x70
    bool bDisableFloorContact; // 0x71
    bool bDisableLookAt; // 0x72
    bool bDisablePoseFixup; // 0x73
    float BlendOutDuration; // 0x74
    float BlendInDuration; // 0x78
    EAnimationDirectionSource LowestAllowedLookAtPriority; // 0x7c
    char pad_7d[0x3];
    static UablIKBlendTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
