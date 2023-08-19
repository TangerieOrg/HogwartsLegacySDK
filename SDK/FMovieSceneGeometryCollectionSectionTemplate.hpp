#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneGeometryCollectionSectionTemplateParameters.hpp"
#pragma pack(push, 1)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
}; // Size: 0x58
#pragma pack(pop)
