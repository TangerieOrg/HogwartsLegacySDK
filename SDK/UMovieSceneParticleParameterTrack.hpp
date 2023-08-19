#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> Sections; // 0x98
    static UMovieSceneParticleParameterTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
