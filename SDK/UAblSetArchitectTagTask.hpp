#pragma once
#include <cstdint>
#include "ArchitectType.hpp"
#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetArchitectTagTask : public UAblAbilityTask {
public:
    FGameplayTag ArchitectTag; // 0x70
    bool RemoveTagAtEndOfTask; // 0x78
    bool AddThisTag; // 0x79
    bool RemoveThisTag; // 0x7a
    ArchitectType Type; // 0x7b
    bool ApplyToAnimationArchitect; // 0x7c
    bool ApplyToInteractionArchitect; // 0x7d
    char pad_7e[0x2];
    static UAblSetArchitectTagTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
