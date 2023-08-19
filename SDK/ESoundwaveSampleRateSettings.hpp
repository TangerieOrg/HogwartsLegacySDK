#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESoundwaveSampleRateSettings : uint8_t {
    Max = 0,
    High = 1,
    Medium = 2,
    Low = 3,
    Min = 4,
    MatchDevice = 5,
};
#pragma pack(pop)
