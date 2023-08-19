#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationGroup.hpp"
#include "FMovieSceneEvaluationMetaData.hpp"
#include "FMovieSceneFrameRange.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationField {
    TArray<FMovieSceneFrameRange> Ranges; // 0x0
    TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
    TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
}; // Size: 0x30
#pragma pack(pop)
