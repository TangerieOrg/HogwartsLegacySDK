#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EComputeNTBsOptions {
    None = 0,
    Normals = 1,
    Tangents = 2,
    WeightedNTBs = 4,
    EComputeNTBsOptions_MAX = 5,
};
#pragma pack(pop)
