#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblObjectStateImpulseIgnoreTask : public UAblAbilityTask {
public:
    bool bUseTaskDuration; // 0x70
    char pad_71[0x3];
    float ImpulseIgnoreDuration; // 0x74
    static UAblObjectStateImpulseIgnoreTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
