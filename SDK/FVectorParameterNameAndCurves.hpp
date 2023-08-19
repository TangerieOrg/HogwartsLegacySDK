#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FVectorParameterNameAndCurves {
    FName ParameterName; // 0x0
    FMovieSceneFloatChannel XCurve; // 0x8
    FMovieSceneFloatChannel YCurve; // 0xa8
    FMovieSceneFloatChannel ZCurve; // 0x148
}; // Size: 0x1e8
#pragma pack(pop)
