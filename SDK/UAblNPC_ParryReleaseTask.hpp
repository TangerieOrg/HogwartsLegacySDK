#pragma once
#include <cstdint>
#include "EEnemy_ParryType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryReleaseTask : public UAblAbilityTask {
public:
    bool bOverrideDBParryToRelease; // 0x70
    char pad_71[0x3];
    float ParryToRelease; // 0x74
    bool bTriggerFiredEvent; // 0x78
    EEnemy_ParryType FiredEventType; // 0x79
    char pad_7a[0x6];
    static UAblNPC_ParryReleaseTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
