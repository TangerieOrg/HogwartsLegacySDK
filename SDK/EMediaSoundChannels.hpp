#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaSoundChannels : int32_t {
    Mono = 0,
    Stereo = 1,
    Surround = 2,
    EMediaSoundChannels_MAX = 3,
};
#pragma pack(pop)
