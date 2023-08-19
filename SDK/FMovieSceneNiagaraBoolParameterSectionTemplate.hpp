#pragma once
#include <cstdint>
#include "FMovieSceneBoolChannel.hpp"
#include "FMovieSceneNiagaraParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    FMovieSceneBoolChannel BoolChannel; // 0x40
}; // Size: 0xd0
#pragma pack(pop)
