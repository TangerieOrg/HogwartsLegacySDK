#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationFieldTrackPtr.hpp"
#pragma pack(push, 1)
struct FMovieSceneFieldEntry_EvaluationTrack {
    FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
    uint16_t NumChildren; // 0x8
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
