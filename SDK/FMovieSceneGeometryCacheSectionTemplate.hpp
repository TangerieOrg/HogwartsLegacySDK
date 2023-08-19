#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneGeometryCacheSectionTemplateParameters.hpp"
#pragma pack(push, 1)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
}; // Size: 0x68
#pragma pack(pop)
