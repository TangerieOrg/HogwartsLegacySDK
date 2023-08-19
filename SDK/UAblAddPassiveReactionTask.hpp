#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblAddPassiveReactionTask : public UAblAbilityTask {
public:
    UClass* PassiveReactionAbility; // 0x70
    TArray<UAblTaskCondition*> TaskConditions; // 0x78
    static UAblAddPassiveReactionTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
