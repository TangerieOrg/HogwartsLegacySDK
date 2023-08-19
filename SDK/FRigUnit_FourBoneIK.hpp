#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_FourBoneIK_DebugSettings.hpp"
#include "FRigUnit_FourBoneIK_WorkData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_FourBoneIK : public FRigUnitMutable {
    FName EndBone; // 0x68
    FTransform EndEffector; // 0x70
    float TranslationLimitDistance; // 0xa0
    float StretchToMaxExtension; // 0xa4
    float MaxExtensionPercentage; // 0xa8
    FVector PrimaryAxis; // 0xac
    FVector HelperAOffset; // 0xb8
    FVector HelperBOffset; // 0xc4
    float PoleVectorLengthMultiplier; // 0xd0
    bool bEnableStretch; // 0xd4
    char pad_d5[0x3];
    float StretchStartRatio; // 0xd8
    float StretchMaximumRatio; // 0xdc
    float weight; // 0xe0
    char pad_e4[0xc];
    FRigUnit_FourBoneIK_DebugSettings DebugSettings; // 0xf0
    FRigUnit_FourBoneIK_WorkData WorkData; // 0x130
    char pad_208[0x8];
}; // Size: 0x210
#pragma pack(pop)
