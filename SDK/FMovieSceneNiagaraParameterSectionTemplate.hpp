#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate {
    FNiagaraVariable Parameter; // 0x20
}; // Size: 0x40
#pragma pack(pop)
