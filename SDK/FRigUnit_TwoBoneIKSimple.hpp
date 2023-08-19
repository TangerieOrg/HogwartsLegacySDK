#pragma once
#include <cstdint>
#include "EControlRigVectorKind.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_TwoBoneIKSimple_DebugSettings.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable {
    FName BoneA; // 0x68
    FName BoneB; // 0x70
    FName EffectorBone; // 0x78
    FTransform Effector; // 0x80
    FVector PrimaryAxis; // 0xb0
    FVector SecondaryAxis; // 0xbc
    float SecondaryAxisWeight; // 0xc8
    FVector PoleVector; // 0xcc
    EControlRigVectorKind PoleVectorKind; // 0xd8
    char pad_d9[0x3];
    FName PoleVectorSpace; // 0xdc
    bool bEnableStretch; // 0xe4
    char pad_e5[0x3];
    float StretchStartRatio; // 0xe8
    float StretchMaximumRatio; // 0xec
    float weight; // 0xf0
    float BoneALength; // 0xf4
    float BoneBLength; // 0xf8
    bool bPropagateToChildren; // 0xfc
    char pad_fd[0x3];
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x100
    FCachedRigElement CachedBoneAIndex; // 0x140
    FCachedRigElement CachedBoneBIndex; // 0x154
    FCachedRigElement CachedEffectorBoneIndex; // 0x168
    FCachedRigElement CachedPoleVectorSpaceIndex; // 0x17c
}; // Size: 0x190
#pragma pack(pop)
