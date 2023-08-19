#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablEnemy_AUSDecisionTask : public UAblAbilityTask {
public:
    float DecisionBranchChance; // 0x70
    char pad_74[0x4];
    static UablEnemy_AUSDecisionTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
