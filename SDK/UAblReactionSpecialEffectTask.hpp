#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblReactionSpecialEffectTask : public UAblAbilityTask {
public:
    FGameplayTag SpecialEffectTag; // 0x70
    float Duration; // 0x78
    char pad_7c[0x4];
    static UAblReactionSpecialEffectTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
