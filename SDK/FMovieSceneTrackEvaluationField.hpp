#pragma once
#include <cstdint>
#include "FMovieSceneTrackEvaluationFieldEntry.hpp"
#pragma pack(push, 1)
struct FMovieSceneTrackEvaluationField {
    TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
}; // Size: 0x10
#pragma pack(pop)
