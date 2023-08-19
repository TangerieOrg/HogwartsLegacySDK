#pragma once
#include <cstdint>
#include "FEventPayload.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneEventSectionData : public FMovieSceneChannel {
    TArray<FFrameNumber> Times; // 0x8
    TArray<FEventPayload> KeyValues; // 0x18
    char pad_28[0x60];
}; // Size: 0x88
#pragma pack(pop)
