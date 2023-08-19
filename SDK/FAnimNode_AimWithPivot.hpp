#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FBoneReference.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_AimWithPivot : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    FBoneReference PivotBone; // 0x20
    FBoneReference LeverBone; // 0x30
    FVector UpAxisInLeverSpace; // 0x40
    FVector ForwardAxisInLeverSpace; // 0x4c
    FBoneReference GuideBone; // 0x58
    float AimAlpha; // 0x68
    FVector TargetInWorldSpace; // 0x6c
}; // Size: 0x78
#pragma pack(pop)
