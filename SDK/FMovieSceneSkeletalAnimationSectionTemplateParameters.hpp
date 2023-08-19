#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneSkeletalAnimationParams.hpp"
#pragma pack(push, 1)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams {
    FFrameNumber SectionStartTime; // 0xd8
    FFrameNumber SectionEndTime; // 0xdc
}; // Size: 0xe0
#pragma pack(pop)
