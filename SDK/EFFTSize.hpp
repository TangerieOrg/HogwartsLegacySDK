#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFFTSize : uint8_t {
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    Max = 6,
};
#pragma pack(pop)
