#pragma once
#include <cstdint>
#include "FMovieSceneSequenceLoopCount.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequencePlaybackSettings {
    uint8_t bAutoPlay : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FMovieSceneSequenceLoopCount LoopCount; // 0x4
    float PlayRate; // 0x8
    float StartTime; // 0xc
    uint8_t bRandomStartTime : 1; // 0x10
    uint8_t bRestoreState : 1; // 0x10
    uint8_t bDisableMovementInput : 1; // 0x10
    uint8_t bDisableLookAtInput : 1; // 0x10
    uint8_t bHidePlayer : 1; // 0x10
    uint8_t bHideHud : 1; // 0x10
    uint8_t bDisableCameraCuts : 1; // 0x10
    uint8_t bPauseAtEnd : 1; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
