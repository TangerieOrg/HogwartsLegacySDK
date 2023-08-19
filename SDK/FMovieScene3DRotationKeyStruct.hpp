#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneKeyStruct.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct {
    FRotator Rotation; // 0x8
    FFrameNumber Time; // 0x14
    char pad_18[0x18];
}; // Size: 0x30
#pragma pack(pop)
