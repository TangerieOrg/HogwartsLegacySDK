#pragma once
#include <cstdint>
#include "FAblAnimationChannel.hpp"
#pragma pack(push, 1)
struct FAblAnimation {
    char pad_0[0x30];
    TArray<FAblAnimationChannel> SortedAnimationChannels; // 0x30
    char pad_40[0x38];
}; // Size: 0x78
#pragma pack(pop)
