#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_TargetableToggleTask : public UAblAbilityTask {
public:
    bool bRegisterAsTargetableAtStart; // 0x70
    bool bRegisterAsTargetableAtEnd; // 0x71
    char pad_72[0x6];
    static UAblNPC_TargetableToggleTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
