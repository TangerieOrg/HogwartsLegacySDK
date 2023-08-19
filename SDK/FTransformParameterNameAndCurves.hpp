#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FTransformParameterNameAndCurves {
    FName ParameterName; // 0x0
    FMovieSceneFloatChannel Translation[3]; // 0x8
    FMovieSceneFloatChannel Rotation[3]; // 0x1e8
    FMovieSceneFloatChannel Scale[3]; // 0x3c8
}; // Size: 0x5a8
#pragma pack(pop)
