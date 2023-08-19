#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FLinearizedSplinePoint.hpp"
#pragma pack(push, 1)
struct FLinearizedSpline {
    bool IsLooped; // 0x0
    char pad_1[0x7];
    TArray<FLinearizedSplinePoint> SplinePoints; // 0x8
    float Length; // 0x18
    FBox Bounds; // 0x1c
}; // Size: 0x38
#pragma pack(pop)
