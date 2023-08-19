#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
class UMovieSceneAudioSection;
#pragma pack(push, 1)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate {
    UMovieSceneAudioSection* AudioSection; // 0x20
}; // Size: 0x28
#pragma pack(pop)
