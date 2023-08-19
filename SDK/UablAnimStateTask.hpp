#pragma once
#include <cstdint>
#include "EEnemyAIAnimState.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablAnimStateTask : public UAblAbilityTask {
public:
    EEnemyAIAnimState State; // 0x70
    char pad_71[0x7];
    static UablAnimStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
