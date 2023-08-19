#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#include "FMovieSceneObjectPathChannelKeyValue.hpp"
class UClass;
#pragma pack(push, 1)
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel {
    UClass* PropertyClass; // 0x8
    TArray<FFrameNumber> Times; // 0x10
    TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
    FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
    char pad_60[0x60];
}; // Size: 0xc0
#pragma pack(pop)
