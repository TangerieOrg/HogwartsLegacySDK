#pragma once
#include <cstdint>
#include "FMovieSceneIntegerChannel.hpp"
#pragma pack(push, 1)
struct FIntegerParameterNameAndCurve {
    FName ParameterName; // 0x0
    FMovieSceneIntegerChannel ParameterCurve; // 0x8
}; // Size: 0x98
#pragma pack(pop)
