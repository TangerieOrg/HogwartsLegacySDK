#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCurveTrack {
    FName CurveName; // 0x0
    TArray<float> CurveWeights; // 0x8
}; // Size: 0x18
#pragma pack(pop)
