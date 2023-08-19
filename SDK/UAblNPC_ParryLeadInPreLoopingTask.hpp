#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryLeadInPreLoopingTask : public UAblAbilityTask {
public:
    bool bParryWindowPersistPastImpact; // 0x70
    char pad_71[0x7];
    static UAblNPC_ParryLeadInPreLoopingTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
