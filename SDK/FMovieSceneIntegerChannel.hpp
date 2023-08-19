#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> Times; // 0x8
    int32_t DefaultValue; // 0x18
    bool bHasDefaultValue; // 0x1c
    char pad_1d[0x3];
    TArray<int32_t> Values; // 0x20
    char pad_30[0x60];
}; // Size: 0x90
#pragma pack(pop)
