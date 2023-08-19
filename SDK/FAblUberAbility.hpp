#pragma once
#include <cstdint>
#include "FAblAbilityChannel.hpp"
#pragma pack(push, 1)
struct FAblUberAbility {
    char pad_0[0x8];
    TArray<FAblAbilityChannel> SortedAbilityChannels; // 0x8
    char pad_18[0x8];
}; // Size: 0x20
#pragma pack(pop)
