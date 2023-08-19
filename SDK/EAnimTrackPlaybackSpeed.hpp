#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimTrackPlaybackSpeed : uint8_t {
    NaturalSpeed = 0,
    UseForcedDuration = 1,
    UseForcedPlayRate = 2,
    EAnimTrackPlaybackSpeed_MAX = 3,
};
#pragma pack(pop)
