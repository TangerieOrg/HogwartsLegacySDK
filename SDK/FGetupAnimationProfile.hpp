#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FGetupAnimationProfile {
    FName Name; // 0x0
    TArray<FGameplayTagContainer> GetupAnimationTags; // 0x8
}; // Size: 0x18
#pragma pack(pop)
