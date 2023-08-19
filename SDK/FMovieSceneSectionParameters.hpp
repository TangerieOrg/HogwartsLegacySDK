#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FMovieSceneSectionParameters {
    FFrameNumber StartFrameOffset; // 0x0
    bool bCanLoop; // 0x4
    char pad_5[0x3];
    FFrameNumber EndFrameOffset; // 0x8
    FFrameNumber FirstLoopStartFrameOffset; // 0xc
    float TimeScale; // 0x10
    int32_t HierarchicalBias; // 0x14
    float StartOffset; // 0x18
    float PrerollTime; // 0x1c
    float PostrollTime; // 0x20
}; // Size: 0x24
#pragma pack(pop)
