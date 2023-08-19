#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblAkEventLookupTask : public UAblAbilityTask {
public:
    FGameplayTagContainer LookupTags; // 0x70
    bool bFollow; // 0x90
    char pad_91[0x3];
    FName SocketName; // 0x94
    char pad_9c[0x4];
    static UAblAkEventLookupTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
