#pragma once
#include <cstdint>
#include "UMovieSceneNiagaraParameterTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack {
public:
    char pad_c0[0x8];
    int32_t ChannelsUsed; // 0xc8
    char pad_cc[0x4];
    static UMovieSceneNiagaraVectorParameterTrack* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
