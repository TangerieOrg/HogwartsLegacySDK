#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConstantQFFTSizeEnum : uint8_t {
    Min = 0,
    XXSmall = 1,
    XSmall = 2,
    Small = 3,
    Medium = 4,
    Large = 5,
    XLarge = 6,
    XXLarge = 7,
    Max = 8,
};
#pragma pack(pop)
