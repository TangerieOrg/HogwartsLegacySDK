#pragma once
#include <cstdint>
#include "FGameplayPropertyEntry.hpp"
#pragma pack(push, 1)
struct FPropertyList {
    TArray<FGameplayPropertyEntry> Properties; // 0x0
    bool bAutomaticallyAdded; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
