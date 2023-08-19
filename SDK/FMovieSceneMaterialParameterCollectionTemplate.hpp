#pragma once
#include <cstdint>
#include "FMovieSceneParameterSectionTemplate.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate {
    UMaterialParameterCollection* MPC; // 0x80
}; // Size: 0x88
#pragma pack(pop)
