#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationHookEvent.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationHookEventContainer {
    TArray<FMovieSceneEvaluationHookEvent> Events; // 0x0
}; // Size: 0x10
#pragma pack(pop)
