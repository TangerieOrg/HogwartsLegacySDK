#pragma once
#include <cstdint>
#include "ETagOperation.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablOpportunityWindowTagTask : public UAblAbilityTask {
public:
    FName SpellName; // 0x70
    FGameplayTagContainer CharacterTags; // 0x78
    ETagOperation TagOperation; // 0x98
    bool RemoveTagsAtEndOfTask; // 0x99
    bool bCheckDatabaseId; // 0x9a
    char pad_9b[0x5];
    TArray<FName> DatabaseIds; // 0xa0
    bool bCheckSubtypeId; // 0xb0
    char pad_b1[0x7];
    TArray<FName> SubtypeIds; // 0xb8
    FGameplayTag DuelTechniqueEventTag; // 0xc8
    static UablOpportunityWindowTagTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
