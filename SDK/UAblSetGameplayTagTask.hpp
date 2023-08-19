#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetGameplayTagTask : public UAblAbilityTask {
public:
    TArray<FGameplayTag> m_TagList; // 0x70
    bool m_RemoveOnEnd; // 0x80
    char pad_81[0x7];
    static UAblSetGameplayTagTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
