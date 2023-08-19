#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblRemoveGameplayTagTask : public UAblAbilityTask {
public:
    TArray<FGameplayTag> m_TagList; // 0x70
    static UAblRemoveGameplayTagTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
