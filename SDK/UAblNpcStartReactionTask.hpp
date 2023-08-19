#pragma once
#include <cstdint>
#include "FQueueReactionParams.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblNpcStartReactionTask : public UAblAbilityTask {
public:
    UClass* ReactionAbility; // 0x70
    TArray<UAblTaskCondition*> TaskConditions; // 0x78
    bool bStartReactionOnlyOnce; // 0x88
    bool bMustPassAllConditions; // 0x89
    bool bUseCurrentReactionData; // 0x8a
    char pad_8b[0x5];
    FQueueReactionParams ReactionParams; // 0x90
    static UAblNpcStartReactionTask* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
