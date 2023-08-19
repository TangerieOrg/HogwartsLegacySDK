#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBakedCurvatureClampMode : int32_t {
    None = 0,
    Positive = 1,
    Negative = 2,
    EBakedCurvatureClampMode_MAX = 3,
};
#pragma pack(pop)
