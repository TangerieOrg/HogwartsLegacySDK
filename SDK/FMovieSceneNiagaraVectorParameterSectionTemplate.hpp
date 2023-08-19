#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneNiagaraParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    FMovieSceneFloatChannel VectorChannels[4]; // 0x40
    int32_t ChannelsUsed; // 0x2c0
    char pad_2c4[0x4];
}; // Size: 0x2c8
#pragma pack(pop)
