#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESetResolutionMethod : int32_t {
    Independent = 0,
    MaxAxis = 1,
    CellSize = 2,
    ESetResolutionMethod_MAX = 3,
};
#pragma pack(pop)
