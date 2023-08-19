#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FBoneReference.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_CameraFixup : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    FBoneReference RootBone; // 0x20
    FBoneReference CameraBone; // 0x30
    FBoneReference TargetBone; // 0x40
    char pad_50[0x18];
}; // Size: 0x68
#pragma pack(pop)
