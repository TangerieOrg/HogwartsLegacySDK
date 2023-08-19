#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneKeyInterpolation : uint8_t {
    Auto = 0,
    User = 1,
    Break = 2,
    Linear = 3,
    Constant = 4,
    EMovieSceneKeyInterpolation_MAX = 5,
};
#pragma pack(pop)
