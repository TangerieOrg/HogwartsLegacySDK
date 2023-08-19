#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FTimecode.hpp"
#pragma pack(push, 1)
struct FMovieSceneTimecodeSource {
    FTimecode Timecode; // 0x0
    FFrameNumber DeltaFrame; // 0x14
}; // Size: 0x18
#pragma pack(pop)
