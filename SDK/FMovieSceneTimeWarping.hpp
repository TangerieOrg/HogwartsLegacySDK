#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FMovieSceneTimeWarping {
    FFrameNumber Start; // 0x0
    FFrameNumber End; // 0x4
}; // Size: 0x8
#pragma pack(pop)
