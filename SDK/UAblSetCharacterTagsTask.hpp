#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblSetCharacterTagsTask : public UAblAbilityTask {
public:
    FGameplayTagContainer CharacterTags; // 0x70
    bool RemoveTagsAtEndOfTask; // 0x90
    bool AddTheseTags; // 0x91
    bool RemoveTheseTags; // 0x92
    char pad_93[0x5];
    TArray<UAblTaskCondition*> TaskConditions; // 0x98
    bool bMustPassAllConditions; // 0xa8
    char pad_a9[0x7];
    static UAblSetCharacterTagsTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
