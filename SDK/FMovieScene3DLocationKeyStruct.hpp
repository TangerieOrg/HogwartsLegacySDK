#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneKeyStruct.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct {
    FVector Location; // 0x8
    FFrameNumber Time; // 0x14
    char pad_18[0x18];
}; // Size: 0x30
#pragma pack(pop)
