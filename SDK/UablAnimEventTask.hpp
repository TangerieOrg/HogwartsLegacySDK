#pragma once
#include <cstdint>
#include "EEnemy_AbilityEvent.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UablAnimEventTask : public UAblAbilityTask {
public:
    EEnemy_AbilityEvent Event; // 0x70
    EEnemy_AbilityEvent EndEvent; // 0x71
    char pad_72[0x2];
    float MinIntervalSeconds; // 0x74
    TArray<UAblTaskCondition*> Conditions; // 0x78
    bool bMustPassAllConditions; // 0x88
    char pad_89[0x7];
    static UablAnimEventTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
