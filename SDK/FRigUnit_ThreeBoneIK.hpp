#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_ThreeBoneIK_DebugSettings.hpp"
#include "FRigUnit_ThreeBoneIK_WorkData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ThreeBoneIK : public FRigUnitMutable {
    FName EndBone; // 0x68
    FTransform EndEffector; // 0x70
    float TranslationLimitDistance; // 0xa0
    float StretchToMaxExtension; // 0xa4
    float MaxExtensionPercentage; // 0xa8
    FVector PrimaryAxis; // 0xac
    FVector HelperOffset; // 0xb8
    float PoleVectorLengthMultiplier; // 0xc4
    bool bEnableStretch; // 0xc8
    char pad_c9[0x3];
    float StretchStartRatio; // 0xcc
    float StretchMaximumRatio; // 0xd0
    float weight; // 0xd4
    char pad_d8[0x8];
    FRigUnit_ThreeBoneIK_DebugSettings DebugSettings; // 0xe0
    FRigUnit_ThreeBoneIK_WorkData WorkData; // 0x120
    char pad_1e8[0x8];
}; // Size: 0x1f0
#pragma pack(pop)
