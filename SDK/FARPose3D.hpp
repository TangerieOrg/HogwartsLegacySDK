#pragma once
#include <cstdint>
#include "EARJointTransformSpace.hpp"
#include "FARSkeletonDefinition.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FARPose3D {
    FARSkeletonDefinition SkeletonDefinition; // 0x0
    TArray<FTransform> JointTransforms; // 0x28
    TArray<bool> IsJointTracked; // 0x38
    EARJointTransformSpace JointTransformSpace; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
