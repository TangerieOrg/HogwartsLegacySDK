#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMoviePipelineEncodeQuality : uint8_t {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    EMoviePipelineEncodeQuality_MAX = 4,
};
#pragma pack(pop)
