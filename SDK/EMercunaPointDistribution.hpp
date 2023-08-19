#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMercunaPointDistribution : uint8_t {
    Uniform = 0,
    Random = 1,
    EMercunaPointDistribution_MAX = 2,
};
#pragma pack(pop)
