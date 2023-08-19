#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneGroomCacheSectionTemplateParameters.hpp"
#pragma pack(push, 1)
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneGroomCacheSectionTemplateParameters Params; // 0x20
}; // Size: 0x48
#pragma pack(pop)
