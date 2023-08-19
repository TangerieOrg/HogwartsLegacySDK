#pragma once
#include <cstdint>
#include "ERichCurveTangentWeightMode.hpp"
#pragma pack(push, 1)
struct FMovieSceneTangentDataSerializationHelper {
    float ArriveTangent; // 0x0
    float LeaveTangent; // 0x4
    ERichCurveTangentWeightMode TangentWeightMode; // 0x8
    char pad_9[0x3];
    float ArriveTangentWeight; // 0xc
    float LeaveTangentWeight; // 0x10
}; // Size: 0x14
#pragma pack(pop)
