#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FAnimPhysPlanarLimit {
    FBoneReference DrivingBone; // 0x0
    FTransform PlaneTransform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
