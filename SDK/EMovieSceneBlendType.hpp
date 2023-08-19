#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneBlendType : uint8_t {
    Invalid = 0,
    Absolute = 1,
    Additive = 2,
    Relative = 4,
    AdditiveFromBase = 8,
    EMovieSceneBlendType_MAX = 9,
};
#pragma pack(pop)
