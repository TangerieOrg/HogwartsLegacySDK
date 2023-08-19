#pragma once
#include <cstdint>
#include "EMovieSceneBlendType.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieScenePropertySectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate {
    FMovieSceneFloatChannel Curves[4]; // 0x38
    EMovieSceneBlendType BlendType; // 0x2b8
    char pad_2b9[0x7];
}; // Size: 0x2c0
#pragma pack(pop)
