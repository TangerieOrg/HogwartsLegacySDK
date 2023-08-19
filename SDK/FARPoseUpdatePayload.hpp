#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FARPoseUpdatePayload {
    FTransform WorldTransform; // 0x0
    TArray<FTransform> JointTransforms; // 0x30
}; // Size: 0x40
#pragma pack(pop)
