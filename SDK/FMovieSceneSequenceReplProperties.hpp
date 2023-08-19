#pragma once
#include <cstdint>
#include "EMovieScenePlayerStatus\Type.hpp"
#include "FFrameTime.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequenceReplProperties {
    FFrameTime LastKnownPosition; // 0x0
    EMovieScenePlayerStatus::Type LastKnownStatus; // 0x8
    char pad_9[0x3];
    int32_t LastKnownNumLoops; // 0xc
}; // Size: 0x10
#pragma pack(pop)
