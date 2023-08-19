#pragma once
#include <cstdint>
#include "FMovieSceneSequenceID.hpp"
#include "FMovieSceneTrackIdentifier.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationKey {
    FMovieSceneSequenceID SequenceID; // 0x0
    FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
    uint32_t SectionIndex; // 0x8
}; // Size: 0xc
#pragma pack(pop)
