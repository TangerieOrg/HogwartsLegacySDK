#pragma once
#include <cstdint>
#include "FMovieSceneIntegerChannel.hpp"
#include "FMovieSceneNiagaraParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    FMovieSceneIntegerChannel IntegerChannel; // 0x40
}; // Size: 0xd0
#pragma pack(pop)
