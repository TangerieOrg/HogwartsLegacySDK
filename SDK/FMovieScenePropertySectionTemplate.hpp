#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#pragma pack(push, 1)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
    FMovieScenePropertySectionData PropertyData; // 0x20
}; // Size: 0x38
#pragma pack(pop)
