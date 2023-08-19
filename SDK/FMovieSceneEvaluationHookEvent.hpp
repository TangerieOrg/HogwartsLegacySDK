#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationHookComponent.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationHookEvent {
    FMovieSceneEvaluationHookComponent Hook; // 0x0
    char pad_20[0x18];
}; // Size: 0x38
#pragma pack(pop)
