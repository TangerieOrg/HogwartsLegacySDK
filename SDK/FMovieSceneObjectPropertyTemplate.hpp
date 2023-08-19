#pragma once
#include <cstdint>
#include "FMovieSceneObjectPathChannel.hpp"
#include "FMovieScenePropertySectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate {
    FMovieSceneObjectPathChannel ObjectChannel; // 0x38
}; // Size: 0xf8
#pragma pack(pop)
