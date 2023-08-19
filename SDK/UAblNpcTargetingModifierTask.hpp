#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcTargetingModifierTask : public UAblAbilityTask {
public:
    bool bModifyTargetingModifierAtTaskStart; // 0x70
    char pad_71[0x3];
    float TargetingModifierAtTaskStart; // 0x74
    bool bModifyTargetingModifierAtTaskEnd; // 0x78
    char pad_79[0x3];
    float TargetingModifierAtTaskEnd; // 0x7c
    bool bRestoreTargetingModifierAtTaskEnd; // 0x80
    char pad_81[0x7];
    static UAblNpcTargetingModifierTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
