#pragma once
#include <cstdint>
#include "FMovieSceneParticleChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneParticleSection : public UMovieSceneSection {
public:
    FMovieSceneParticleChannel ParticleKeys; // 0xe8
    static UMovieSceneParticleSection* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
