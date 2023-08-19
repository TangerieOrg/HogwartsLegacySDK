#pragma once
#include <cstdint>
#include "FFrameTime.hpp"
#pragma pack(push, 1)
struct FMovieSceneTimeTransform {
    float TimeScale; // 0x0
    FFrameTime Offset; // 0x4
}; // Size: 0xc
#pragma pack(pop)
