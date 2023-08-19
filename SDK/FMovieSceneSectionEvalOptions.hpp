#pragma once
#include <cstdint>
#include "EMovieSceneCompletionMode.hpp"
#pragma pack(push, 1)
struct FMovieSceneSectionEvalOptions {
    bool bCanEditCompletionMode; // 0x0
    EMovieSceneCompletionMode CompletionMode; // 0x1
}; // Size: 0x2
#pragma pack(pop)
