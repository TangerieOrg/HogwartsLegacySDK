#pragma once
#include <cstdint>
#include "FMovieSceneBoolChannel.hpp"
#include "FMovieScenePropertySectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    FMovieSceneBoolChannel BoolCurve; // 0x38
}; // Size: 0xc8
#pragma pack(pop)
