#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneChannel.hpp"
class UEnum;
#pragma pack(push, 1)
struct FMovieSceneByteChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> Times; // 0x8
    uint8_t DefaultValue; // 0x18
    bool bHasDefaultValue; // 0x19
    char pad_1a[0x6];
    TArray<uint8_t> Values; // 0x20
    UEnum* Enum; // 0x30
    char pad_38[0x60];
}; // Size: 0x98
#pragma pack(pop)
