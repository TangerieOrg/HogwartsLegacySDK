#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneActorReferenceKey.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneActorReferenceData : public FMovieSceneChannel {
    TArray<FFrameNumber> KeyTimes; // 0x8
    FMovieSceneActorReferenceKey DefaultValue; // 0x18
    TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
    char pad_50[0x60];
}; // Size: 0xb0
#pragma pack(pop)
