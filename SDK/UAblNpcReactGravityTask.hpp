#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblNpcReactGravityTask : public UAblAbilityTask {
public:
    bool bModifyGravityAtTaskStart; // 0x70
    char pad_71[0x3];
    float TaskStartGravityMultiplier; // 0x74
    bool bModifyGravityAtTaskEnd; // 0x78
    char pad_79[0x3];
    float TaskEndGravityMultiplier; // 0x7c
    bool bRestoreGravityAtTaskEnd; // 0x80
    char pad_81[0x7];
    TArray<UClass*> AbilitiesToIgnoreTaskEndGravityRestoration; // 0x88
    static UAblNpcReactGravityTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
