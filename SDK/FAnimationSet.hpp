#pragma once
#include <cstdint>
#include "FAnimationSetEntry.hpp"
#pragma pack(push, 1)
struct FAnimationSet {
    TArray<FAnimationSetEntry> AnimationEntries; // 0x0
}; // Size: 0x10
#pragma pack(pop)
