#pragma once
#include <cstdint>
#include "FMovieScenePropertySectionTemplate.hpp"
#include "FMovieSceneStringChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    FMovieSceneStringChannel StringCurve; // 0x38
}; // Size: 0xd8
#pragma pack(pop)
