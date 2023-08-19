#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieScenePositionType : uint8_t {
    Frame = 0,
    Time = 1,
    MarkedFrame = 2,
    EMovieScenePositionType_MAX = 3,
};
#pragma pack(pop)
