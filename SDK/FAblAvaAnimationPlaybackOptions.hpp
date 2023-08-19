#pragma once
#include <cstdint>
#include "EAnimTrackPlaybackSpeed.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FAblAvaAnimationPlaybackOptions {
    EAnimTrackPlaybackSpeed PlayRateType; // 0x0
    char pad_1[0x7];
    UFloatProvider* ForcedDuration; // 0x8
    UFloatProvider* ForcedPlayRate; // 0x10
}; // Size: 0x18
#pragma pack(pop)
