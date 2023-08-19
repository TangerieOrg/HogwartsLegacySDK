#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPhysicalReactionBlendBackTask : public UAblAbilityTask {
public:
    bool bForcePopOutOfRagdollImmediately; // 0x70
    bool bOverrideBlendDuration; // 0x71
    char pad_72[0x2];
    float BlendDurationOverride; // 0x74
    bool bStationaryCapsuleWhileBlending; // 0x78
    char pad_79[0x7];
    static UAblPhysicalReactionBlendBackTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
