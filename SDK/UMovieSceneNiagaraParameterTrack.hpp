#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#include "UMovieSceneNiagaraTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack {
public:
    FNiagaraVariable Parameter; // 0xa0
    static UMovieSceneNiagaraParameterTrack* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
