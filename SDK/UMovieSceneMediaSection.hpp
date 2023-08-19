#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "UMovieSceneSection.hpp"
class UMediaSource;
class UMediaTexture;
class UMediaSoundComponent;
class UMediaPlayer;
#pragma pack(push, 1)
class UMovieSceneMediaSection : public UMovieSceneSection {
public:
    UMediaSource* MediaSource; // 0xe8
    bool bLooping; // 0xf0
    char pad_f1[0x3];
    FFrameNumber StartFrameOffset; // 0xf4
    UMediaTexture* MediaTexture; // 0xf8
    UMediaSoundComponent* MediaSoundComponent; // 0x100
    bool bUseExternalMediaPlayer; // 0x108
    char pad_109[0x7];
    UMediaPlayer* ExternalMediaPlayer; // 0x110
    static UMovieSceneMediaSection* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
