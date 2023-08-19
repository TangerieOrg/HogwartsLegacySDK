#pragma once
#include <cstdint>
#include "FMovieSceneParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    TArray<FName> BrushPropertyNamePath; // 0x80
}; // Size: 0x90
#pragma pack(pop)
