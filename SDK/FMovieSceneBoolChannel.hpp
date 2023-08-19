#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneBoolChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> Times; // 0x8
    bool DefaultValue; // 0x18
    bool bHasDefaultValue; // 0x19
    char pad_1a[0x6];
    TArray<bool> Values; // 0x20
    char pad_30[0x60];
}; // Size: 0x90
#pragma pack(pop)
