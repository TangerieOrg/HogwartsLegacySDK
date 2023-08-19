#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFSR2QualityMode : int32_t {
    Unused = 0,
    Quality = 1,
    Balanced = 2,
    Performance = 3,
    UltraPerformance = 4,
    EFSR2QualityMode_MAX = 5,
};
#pragma pack(pop)
