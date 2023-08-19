#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "FMovieSceneTangentData.hpp"
#pragma pack(push, 1)
struct FMovieSceneFloatValue {
    float Value; // 0x0
    FMovieSceneTangentData Tangent; // 0x4
    ERichCurveInterpMode InterpMode; // 0x18
    ERichCurveTangentMode TangentMode; // 0x19
    uint8_t PaddingByte; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
