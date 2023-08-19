#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOcclusionMapDistribution : int32_t {
    Uniform = 0,
    Cosine = 1,
    EOcclusionMapDistribution_MAX = 2,
};
#pragma pack(pop)
