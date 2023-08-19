#pragma once
#include <cstdint>
#include "FMovieSceneBoolChannel.hpp"
#pragma pack(push, 1)
struct FBoolParameterNameAndCurve {
    FName ParameterName; // 0x0
    FMovieSceneBoolChannel ParameterCurve; // 0x8
}; // Size: 0x98
#pragma pack(pop)
