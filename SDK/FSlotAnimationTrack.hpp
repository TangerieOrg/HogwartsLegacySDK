#pragma once
#include <cstdint>
#include "FAnimTrack.hpp"
#pragma pack(push, 1)
struct FSlotAnimationTrack {
    FName SlotName; // 0x0
    FAnimTrack AnimTrack; // 0x8
}; // Size: 0x18
#pragma pack(pop)
