#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneKeyStruct.hpp"
#pragma pack(push, 1)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
    FFrameNumber Time; // 0x8
    char pad_c[0x1c];
}; // Size: 0x28
#pragma pack(pop)
