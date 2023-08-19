#pragma once
#include <cstdint>
#include "ECurveBlendOption\Type.hpp"
#include "FAnimNode_Base.hpp"
#include "FGuid.hpp"
#include "FInputBlendPose.hpp"
#include "FPerBoneBlendWeight.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    TArray<FPoseLink> BlendPoses; // 0x20
    TArray<FInputBlendPose> LayerSetup; // 0x30
    TArray<float> BlendWeights; // 0x40
    bool bMeshSpaceRotationBlend; // 0x50
    bool bMeshSpaceScaleBlend; // 0x51
    ECurveBlendOption::Type CurveBlendOption; // 0x52
    bool bBlendRootMotionBasedOnRootBone; // 0x53
    char pad_54[0x4];
    int32_t LODThreshold; // 0x58
    char pad_5c[0x4];
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
    FGuid SkeletonGuid; // 0x70
    FGuid VirtualBoneGuid; // 0x80
    char pad_90[0x30];
}; // Size: 0xc0
#pragma pack(pop)
