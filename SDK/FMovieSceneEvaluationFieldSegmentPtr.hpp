#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationFieldTrackPtr.hpp"
#include "FMovieSceneSegmentIdentifier.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr {
    FMovieSceneSegmentIdentifier SegmentID; // 0x8
}; // Size: 0xc
#pragma pack(pop)
