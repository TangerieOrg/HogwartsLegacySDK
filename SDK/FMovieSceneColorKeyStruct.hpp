#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FLinearColor.hpp"
#include "FMovieSceneKeyStruct.hpp"
#pragma pack(push, 1)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct {
    FLinearColor Color; // 0x8
    FFrameNumber Time; // 0x18
    char pad_1c[0x1c];
}; // Size: 0x38
#pragma pack(pop)
