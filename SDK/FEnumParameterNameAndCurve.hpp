#pragma once
#include <cstdint>
#include "FMovieSceneByteChannel.hpp"
#pragma pack(push, 1)
struct FEnumParameterNameAndCurve {
    FName ParameterName; // 0x0
    FMovieSceneByteChannel ParameterCurve; // 0x8
}; // Size: 0xa0
#pragma pack(pop)
