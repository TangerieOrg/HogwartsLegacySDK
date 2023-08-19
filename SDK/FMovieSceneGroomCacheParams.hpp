#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
class UGroomCache;
#pragma pack(push, 1)
struct FMovieSceneGroomCacheParams {
    UGroomCache* GroomCache; // 0x0
    FFrameNumber FirstLoopStartFrameOffset; // 0x8
    FFrameNumber StartFrameOffset; // 0xc
    FFrameNumber EndFrameOffset; // 0x10
    float PlayRate; // 0x14
    uint8_t bReverse : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
