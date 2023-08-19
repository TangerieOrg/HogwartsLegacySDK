#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
class UMovieSceneAkAudioEventSection;
#pragma pack(push, 1)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate {
    UMovieSceneAkAudioEventSection* Section; // 0x20
}; // Size: 0x28
#pragma pack(pop)
