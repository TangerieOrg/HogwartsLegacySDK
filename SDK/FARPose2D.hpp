#pragma once
#include <cstdint>
#include "FARSkeletonDefinition.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FARPose2D {
    FARSkeletonDefinition SkeletonDefinition; // 0x0
    TArray<FVector2D> JointLocations; // 0x28
    TArray<bool> IsJointTracked; // 0x38
}; // Size: 0x48
#pragma pack(pop)
