#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneObjectPathChannel.hpp"
#pragma pack(push, 1)
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate {
    int32_t MaterialIndex; // 0x20
    char pad_24[0x4];
    FMovieSceneObjectPathChannel MaterialChannel; // 0x28
}; // Size: 0xe8
#pragma pack(pop)
