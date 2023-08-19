#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;
class UMediaPlayer;
#pragma pack(push, 1)
struct FMovieSceneMediaSectionParams {
    UMediaSoundComponent* MediaSoundComponent; // 0x0
    UMediaSource* MediaSource; // 0x8
    UMediaTexture* MediaTexture; // 0x10
    UMediaPlayer* MediaPlayer; // 0x18
    FFrameNumber SectionStartFrame; // 0x20
    FFrameNumber SectionEndFrame; // 0x24
    bool bLooping; // 0x28
    char pad_29[0x3];
    FFrameNumber StartFrameOffset; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
