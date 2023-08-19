#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> AudioSections; // 0x98
    static UMovieSceneAudioTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
