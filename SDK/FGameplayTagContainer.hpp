#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#pragma pack(push, 1)
struct FGameplayTagContainer {
    TArray<FGameplayTag> GameplayTags; // 0x0
    TArray<FGameplayTag> ParentTags; // 0x10
}; // Size: 0x20
#pragma pack(pop)
