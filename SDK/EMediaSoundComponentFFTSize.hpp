#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaSoundComponentFFTSize : uint8_t {
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    EMediaSoundComponentFFTSize_MAX = 4,
};
#pragma pack(pop)
