#pragma once
#include <cstdint>
#include "UMovieSceneNiagaraTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack {
public:
    char pad_a0[0x8];
    static UMovieSceneNiagaraSystemTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
