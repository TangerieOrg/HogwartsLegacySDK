#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneNiagaraParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    FMovieSceneFloatChannel RedChannel; // 0x40
    FMovieSceneFloatChannel GreenChannel; // 0xe0
    FMovieSceneFloatChannel BlueChannel; // 0x180
    FMovieSceneFloatChannel AlphaChannel; // 0x220
}; // Size: 0x2c0
#pragma pack(pop)
