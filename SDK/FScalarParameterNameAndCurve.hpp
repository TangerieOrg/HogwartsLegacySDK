#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FScalarParameterNameAndCurve {
    FName ParameterName; // 0x0
    FMovieSceneFloatChannel ParameterCurve; // 0x8
}; // Size: 0xa8
#pragma pack(pop)
