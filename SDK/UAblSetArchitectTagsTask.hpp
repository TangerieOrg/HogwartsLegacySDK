#pragma once
#include <cstdint>
#include "ArchitectType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetArchitectTagsTask : public UAblAbilityTask {
public:
    FGameplayTagContainer ArchitectTags; // 0x70
    bool RemoveTagsAtEndOfTask; // 0x90
    bool AddTheseTags; // 0x91
    bool RemoveTheseTags; // 0x92
    ArchitectType Type; // 0x93
    char pad_94[0x4];
    static UAblSetArchitectTagsTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
