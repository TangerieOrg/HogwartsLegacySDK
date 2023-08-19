#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneStringChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> Times; // 0x8
    TArray<FString> Values; // 0x18
    FString DefaultValue; // 0x28
    bool bHasDefaultValue; // 0x38
    char pad_39[0x67];
}; // Size: 0xa0
#pragma pack(pop)
