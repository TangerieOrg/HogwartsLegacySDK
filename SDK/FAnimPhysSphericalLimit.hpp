#pragma once
#include <cstdint>
#include "ESphericalLimitType.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimPhysSphericalLimit {
    FBoneReference DrivingBone; // 0x0
    FVector SphereLocalOffset; // 0x10
    float LimitRadius; // 0x1c
    ESphericalLimitType LimitType; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
