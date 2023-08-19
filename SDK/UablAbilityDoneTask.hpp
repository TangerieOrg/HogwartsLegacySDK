#pragma once
#include <cstdint>
#include "EEnemyAIState.hpp"
#include "EEnemy_Ability.hpp"
#include "UAblAbilityTask.hpp"
class UAblBranchCondition;
#pragma pack(push, 1)
class UablAbilityDoneTask : public UAblAbilityTask {
public:
    EEnemy_Ability NextAbility; // 0x70
    bool bDelayBranchIfNextIsIdle; // 0x71
    char pad_72[0x6];
    TArray<EEnemyAIState> DelayBranchStates; // 0x78
    TArray<UAblBranchCondition*> Conditions; // 0x88
    bool bMustPassAllConditions; // 0x98
    char pad_99[0x7];
    static UablAbilityDoneTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
