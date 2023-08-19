#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneNiagaraParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    FMovieSceneFloatChannel FloatChannel; // 0x40
}; // Size: 0xe0
#pragma pack(pop)
