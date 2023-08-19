#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FColorParameterNameAndCurves {
    FName ParameterName; // 0x0
    FMovieSceneFloatChannel RedCurve; // 0x8
    FMovieSceneFloatChannel GreenCurve; // 0xa8
    FMovieSceneFloatChannel BlueCurve; // 0x148
    FMovieSceneFloatChannel AlphaCurve; // 0x1e8
}; // Size: 0x288
#pragma pack(pop)
