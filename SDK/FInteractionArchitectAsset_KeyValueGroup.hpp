#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UBaseArchitectAsset;
#pragma pack(push, 1)
struct FInteractionArchitectAsset_KeyValueGroup {
    UBaseArchitectAsset* Asset; // 0x0
    FGameplayTagContainer GameplayTags; // 0x8
}; // Size: 0x28
#pragma pack(pop)
