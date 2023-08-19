#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#include "FMovieSceneEvent.hpp"
#pragma pack(push, 1)
struct FMovieSceneEventChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> KeyTimes; // 0x8
    TArray<FMovieSceneEvent> KeyValues; // 0x18
    char pad_28[0x60];
}; // Size: 0x88
#pragma pack(pop)
