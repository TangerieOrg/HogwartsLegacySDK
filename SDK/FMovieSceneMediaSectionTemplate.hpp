#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneMediaSectionParams.hpp"
#pragma pack(push, 1)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneMediaSectionParams Params; // 0x20
}; // Size: 0x50
#pragma pack(pop)
