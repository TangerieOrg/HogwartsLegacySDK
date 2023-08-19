#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> ParticleSections; // 0x98
    static UMovieSceneParticleTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
