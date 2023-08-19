#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneFloatChannel SlomoCurve; // 0x20
}; // Size: 0xc0
#pragma pack(pop)
