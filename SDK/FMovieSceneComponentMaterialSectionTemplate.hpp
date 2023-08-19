#pragma once
#include <cstdint>
#include "FMovieSceneParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    int32_t MaterialIndex; // 0x80
    char pad_84[0x4];
}; // Size: 0x88
#pragma pack(pop)
