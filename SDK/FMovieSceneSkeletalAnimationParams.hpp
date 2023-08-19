#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneFloatChannel.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FMovieSceneSkeletalAnimationParams {
    UAnimSequenceBase* Animation; // 0x0
    FFrameNumber FirstLoopStartFrameOffset; // 0x8
    FFrameNumber StartFrameOffset; // 0xc
    FFrameNumber EndFrameOffset; // 0x10
    float PlayRate; // 0x14
    uint8_t bReverse : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x3];
    FName SlotName; // 0x1c
    char pad_24[0x4];
    FMovieSceneFloatChannel weight; // 0x28
    bool bSkipAnimNotifiers; // 0xc8
    bool bForceCustomMode; // 0xc9
    char pad_ca[0x2];
    float StartOffset; // 0xcc
    float EndOffset; // 0xd0
    char pad_d4[0x4];
}; // Size: 0xd8
#pragma pack(pop)
