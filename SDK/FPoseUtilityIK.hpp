#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPoseUtilityIK {
    FBoneReference Base; // 0x0
    FVector LocalHinge; // 0x10
    FBoneReference Effector; // 0x1c
    FBoneReference Target; // 0x2c
}; // Size: 0x3c
#pragma pack(pop)
