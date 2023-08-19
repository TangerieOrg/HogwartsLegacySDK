#pragma once
#include <cstdint>
#include "EMovieScenePositionType.hpp"
#include "EUpdatePositionMethod.hpp"
#include "FFrameTime.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequencePlaybackParams {
    FFrameTime Frame; // 0x0
    float Time; // 0x8
    char pad_c[0x4];
    FString MarkedFrame; // 0x10
    EMovieScenePositionType PositionType; // 0x20
    EUpdatePositionMethod UpdateMethod; // 0x21
    char pad_22[0x6];
}; // Size: 0x28
#pragma pack(pop)
