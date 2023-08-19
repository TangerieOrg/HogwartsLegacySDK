#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "FMovieSceneTangentDataSerializationHelper.hpp"
#pragma pack(push, 1)
struct FMovieSceneFloatValueSerializationHelper {
    float Value; // 0x0
    ERichCurveInterpMode InterpMode; // 0x4
    ERichCurveTangentMode TangentMode; // 0x5
    char pad_6[0x2];
    FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
}; // Size: 0x1c
#pragma pack(pop)
