#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneParticleChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneParticleChannel ParticleKeys; // 0x20
}; // Size: 0xb8
#pragma pack(pop)
