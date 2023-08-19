#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneSkeletalAnimationSectionTemplateParameters.hpp"
#pragma pack(push, 1)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
}; // Size: 0x100
#pragma pack(pop)
