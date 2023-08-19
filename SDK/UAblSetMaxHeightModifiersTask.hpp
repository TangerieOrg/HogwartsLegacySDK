#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblSetMaxHeightModifiersTask : public UAblAbilityTask {
public:
    bool bEnableMaxHeightModifiers; // 0x70
    bool bOverrideMaxHeightValue; // 0x71
    char pad_72[0x2];
    float OverrideMaxHeightValue; // 0x74
    EStandardManagedPriority Priority; // 0x78
    char pad_79[0x7];
    TArray<UAblTaskCondition*> Conditions; // 0x80
    bool bMustPassAllConditions; // 0x90
    char pad_91[0x7];
    static UAblSetMaxHeightModifiersTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
