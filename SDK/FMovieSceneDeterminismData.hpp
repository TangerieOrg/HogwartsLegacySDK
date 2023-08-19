#pragma once
#include <cstdint>
#include "FFrameTime.hpp"
#pragma pack(push, 1)
struct FMovieSceneDeterminismData {
    TArray<FFrameTime> Fences; // 0x0
    bool bParentSequenceRequiresLowerFence; // 0x10
    bool bParentSequenceRequiresUpperFence; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
