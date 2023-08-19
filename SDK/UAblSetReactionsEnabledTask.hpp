#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetReactionsEnabledTask : public UAblAbilityTask {
public:
    bool bReactionsEnabled; // 0x70
    EStandardManagedPriority Priority; // 0x71
    char pad_72[0x6];
    static UAblSetReactionsEnabledTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
