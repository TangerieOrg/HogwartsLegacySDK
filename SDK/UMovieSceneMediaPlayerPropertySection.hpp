#pragma once
#include <cstdint>
#include "UMovieSceneSection.hpp"
class UMediaSource;
#pragma pack(push, 1)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection {
public:
    UMediaSource* MediaSource; // 0xe8
    bool bLoop; // 0xf0
    char pad_f1[0x7];
    static UMovieSceneMediaPlayerPropertySection* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
