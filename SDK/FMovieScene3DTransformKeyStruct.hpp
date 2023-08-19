#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneKeyStruct.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct {
    FVector Location; // 0x8
    FRotator Rotation; // 0x14
    FVector Scale; // 0x20
    FFrameNumber Time; // 0x2c
    char pad_30[0x18];
}; // Size: 0x48
#pragma pack(pop)
