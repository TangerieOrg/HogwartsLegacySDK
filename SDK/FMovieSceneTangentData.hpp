#pragma once
#include <cstdint>
#include "ERichCurveTangentWeightMode.hpp"
#pragma pack(push, 1)
struct FMovieSceneTangentData {
    float ArriveTangent; // 0x0
    float LeaveTangent; // 0x4
    float ArriveTangentWeight; // 0x8
    float LeaveTangentWeight; // 0xc
    ERichCurveTangentWeightMode TangentWeightMode; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
