#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
class UMovieSceneAkAudioRTPCSection;
#pragma pack(push, 1)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate {
    UMovieSceneAkAudioRTPCSection* Section; // 0x20
}; // Size: 0x28
#pragma pack(pop)
