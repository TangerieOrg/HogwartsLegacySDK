#pragma once
#include <cstdint>
#include "ETemplateSectionPropertyScaleType.hpp"
#include "FGuid.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieScenePropertyBinding.hpp"
#pragma pack(push, 1)
struct FTemplateSectionPropertyScale {
    FGuid ObjectBinding; // 0x0
    FMovieScenePropertyBinding PropertyBinding; // 0x10
    ETemplateSectionPropertyScaleType PropertyScaleType; // 0x24
    FMovieSceneFloatChannel FloatChannel; // 0x28
}; // Size: 0xc8
#pragma pack(pop)
