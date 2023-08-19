#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieScenePropertySectionTemplate.hpp"
class UMediaSource;
#pragma pack(push, 1)
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    UMediaSource* MediaSource; // 0x38
    FFrameNumber SectionStartFrame; // 0x40
    bool bLoop; // 0x44
    char pad_45[0x3];
}; // Size: 0x48
#pragma pack(pop)
