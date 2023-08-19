#pragma once
#include <cstdint>
#include "FMovieScene2DTransformMask.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieScene2DTransformSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieScene2DTransformMask TransformMask; // 0xf0
    char pad_f4[0x4];
    FMovieSceneFloatChannel Translation[2]; // 0xf8
    FMovieSceneFloatChannel Rotation; // 0x238
    FMovieSceneFloatChannel Scale[2]; // 0x2d8
    FMovieSceneFloatChannel Shear[2]; // 0x418
    static UMovieScene2DTransformSection* StaticClass();
}; // Size: 0x558
#pragma pack(pop)
