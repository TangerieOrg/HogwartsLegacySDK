#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationKey.hpp"
#pragma pack(push, 1)
struct FMovieSceneOrderedEvaluationKey {
    FMovieSceneEvaluationKey Key; // 0x0
    uint16_t SetupIndex; // 0xc
    uint16_t TearDownIndex; // 0xe
}; // Size: 0x10
#pragma pack(pop)
