#pragma once
#include <cstdint>
#include "EAnimTrackPlaybackRange.hpp"
#include "FAnimTrackRangedFloat.hpp"
#pragma pack(push, 1)
struct FAnimTrackClipRange {
    EAnimTrackPlaybackRange RangeType; // 0x0
    char pad_1[0x3];
    FAnimTrackRangedFloat TimingOffset; // 0x4
    FAnimTrackRangedFloat StartOffset; // 0x10
    FAnimTrackRangedFloat EndOffset; // 0x1c
    FAnimTrackRangedFloat Duration; // 0x28
}; // Size: 0x34
#pragma pack(pop)
