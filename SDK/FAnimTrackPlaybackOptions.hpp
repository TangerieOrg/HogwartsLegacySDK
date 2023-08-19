#pragma once
#include <cstdint>
#include "EAnimTrackPlaybackSpeed.hpp"
#pragma pack(push, 1)
struct FAnimTrackPlaybackOptions {
    EAnimTrackPlaybackSpeed PlayRateType; // 0x0
    char pad_1[0x3];
    float ForcedDuration; // 0x4
    float ForcedPlayRate; // 0x8
}; // Size: 0xc
#pragma pack(pop)
