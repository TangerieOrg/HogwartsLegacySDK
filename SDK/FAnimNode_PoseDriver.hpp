#pragma once
#include <cstdint>
#include "EPoseDriverOutput.hpp"
#include "EPoseDriverSource.hpp"
#include "FAnimNode_PoseHandler.hpp"
#include "FBoneReference.hpp"
#include "FPoseDriverTarget.hpp"
#include "FPoseLink.hpp"
#include "FRBFParams.hpp"
#pragma pack(push, 1)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
    FPoseLink SourcePose; // 0x80
    TArray<FBoneReference> SourceBones; // 0x90
    TArray<FBoneReference> OnlyDriveBones; // 0xa0
    TArray<FPoseDriverTarget> PoseTargets; // 0xb0
    char pad_c0[0x30];
    FBoneReference EvalSpaceBone; // 0xf0
    FRBFParams RBFParams; // 0x100
    EPoseDriverSource DriveSource; // 0x12c
    EPoseDriverOutput DriveOutput; // 0x12d
    uint8_t bOnlyDriveSelectedBones : 1; // 0x12e
    uint8_t pad_bitfield_12e_1 : 7;
    char pad_12f[0x1];
    int32_t LODThreshold; // 0x130
    char pad_134[0x34];
}; // Size: 0x168
#pragma pack(pop)
