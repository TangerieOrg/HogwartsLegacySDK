#pragma once
#include <cstdint>
#include "EMovieSceneCompletionMode.hpp"
#include "FMovieSceneEvalTemplateBase.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
    EMovieSceneCompletionMode CompletionMode; // 0x10
    char pad_11[0xf];
}; // Size: 0x20
#pragma pack(pop)
