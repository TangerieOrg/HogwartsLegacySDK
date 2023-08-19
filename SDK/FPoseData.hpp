#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPoseData {
    TArray<FTransform> LocalSpacePose; // 0x0
    char pad_10[0x50];
    TArray<float> CurveData; // 0x60
}; // Size: 0x70
#pragma pack(pop)
