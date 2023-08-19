#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESoundWaveFFTSize {
    VerySmall_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    VeryLarge_2048 = 4,
    ESoundWaveFFTSize_MAX = 5,
};
#pragma pack(pop)
