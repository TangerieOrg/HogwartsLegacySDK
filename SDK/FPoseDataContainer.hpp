#pragma once
#include <cstdint>
#include "FAnimCurveBase.hpp"
#include "FPoseData.hpp"
#include "FSmartName.hpp"
#pragma pack(push, 1)
struct FPoseDataContainer {
    TArray<FSmartName> PoseNames; // 0x0
    TArray<FName> Tracks; // 0x10
    char pad_20[0x50];
    TArray<FPoseData> Poses; // 0x70
    TArray<FAnimCurveBase> Curves; // 0x80
}; // Size: 0x90
#pragma pack(pop)
