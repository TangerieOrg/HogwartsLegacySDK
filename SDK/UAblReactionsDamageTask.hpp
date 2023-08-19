#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblReactionsDamageTask : public UAblAbilityTask {
public:
    bool bUseTagsFromReactionData; // 0x70
    char pad_71[0x7];
    FGameplayTagContainer AdditionalGameplayTags; // 0x78
    float Damage; // 0x98
    char pad_9c[0x4];
    static UAblReactionsDamageTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
