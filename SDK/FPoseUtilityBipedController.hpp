#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FPoseUtilityIK.hpp"
#include "FPoseUtilityRFK.hpp"
#pragma pack(push, 1)
struct FPoseUtilityBipedController {
    FBoneReference Pelvis; // 0x0
    FBoneReference PelvisTarget; // 0x10
    FPoseUtilityIK RightLeg; // 0x20
    FPoseUtilityIK LeftLeg; // 0x5c
    FPoseUtilityRFK Spine; // 0x98
    FPoseUtilityIK RightArm; // 0x100
    FPoseUtilityIK LeftArm; // 0x13c
    FPoseUtilityRFK Neck; // 0x178
}; // Size: 0x1e0
#pragma pack(pop)
