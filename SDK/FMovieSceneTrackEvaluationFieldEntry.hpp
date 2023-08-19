#pragma once
#include <cstdint>
#include "ESectionEvaluationFlags.hpp"
#include "FFrameNumber.hpp"
#include "FFrameNumberRange.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
struct FMovieSceneTrackEvaluationFieldEntry {
    UMovieSceneSection* Section; // 0x0
    FFrameNumberRange Range; // 0x8
    FFrameNumber ForcedTime; // 0x18
    ESectionEvaluationFlags flags; // 0x1c
    char pad_1d[0x1];
    int16_t LegacySortOrder; // 0x1e
}; // Size: 0x20
#pragma pack(pop)
