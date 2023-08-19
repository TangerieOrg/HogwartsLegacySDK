#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationGroupLUTIndex.hpp"
#include "FMovieSceneFieldEntry_ChildTemplate.hpp"
#include "FMovieSceneFieldEntry_EvaluationTrack.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationGroup {
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
    TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
    TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
}; // Size: 0x30
#pragma pack(pop)
