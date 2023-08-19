#pragma once
#include <cstdint>
#include "ERichCurveExtrapolation.hpp"
#include "FMovieSceneFloatValueSerializationHelper.hpp"
#pragma pack(push, 1)
struct FMovieSceneFloatChannelSerializationHelper {
    ERichCurveExtrapolation PreInfinityExtrap; // 0x0
    ERichCurveExtrapolation PostInfinityExtrap; // 0x1
    char pad_2[0x6];
    TArray<int32_t> Times; // 0x8
    TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
    float DefaultValue; // 0x28
    bool bHasDefaultValue; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
