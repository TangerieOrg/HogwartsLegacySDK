#pragma once
#include <cstdint>
#include "UMovieSceneNiagaraParameterTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack {
public:
    char pad_c0[0x8];
    static UMovieSceneNiagaraIntegerParameterTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
