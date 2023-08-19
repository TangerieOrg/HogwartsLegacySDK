#pragma once
#include <cstdint>
#include "FMovieSceneSequenceID.hpp"
#include "FMovieSceneTrackIdentifier.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationFieldTrackPtr {
    FMovieSceneSequenceID SequenceID; // 0x0
    FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
}; // Size: 0x8
#pragma pack(pop)
