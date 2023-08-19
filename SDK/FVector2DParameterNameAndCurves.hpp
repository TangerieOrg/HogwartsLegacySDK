#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FVector2DParameterNameAndCurves {
    FName ParameterName; // 0x0
    FMovieSceneFloatChannel XCurve; // 0x8
    FMovieSceneFloatChannel YCurve; // 0xa8
}; // Size: 0x148
#pragma pack(pop)
