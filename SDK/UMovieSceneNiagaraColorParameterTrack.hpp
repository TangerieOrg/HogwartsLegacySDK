#pragma once
#include <cstdint>
#include "UMovieSceneNiagaraParameterTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack {
public:
    char pad_c0[0x8];
    static UMovieSceneNiagaraColorParameterTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
