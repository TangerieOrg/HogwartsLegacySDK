#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_TwoBoneIK_DebugSettings.hpp"
#include "FRigUnit_TwoBoneIK_WorkData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIK : public FRigUnitMutable {
    FName EndBone; // 0x68
    FTransform EndEffector; // 0x70
    float TranslationLimitDistance; // 0xa0
    float StretchToMaxExtension; // 0xa4
    float MaxExtensionPercentage; // 0xa8
    FVector PrimaryAxis; // 0xac
    float PoleVectorLengthMultiplier; // 0xb8
    bool bEnableStretch; // 0xbc
    char pad_bd[0x3];
    float StretchStartRatio; // 0xc0
    float StretchMaximumRatio; // 0xc4
    float weight; // 0xc8
    float CushionAmount; // 0xcc
    FRigUnit_TwoBoneIK_DebugSettings DebugSettings; // 0xd0
    FRigUnit_TwoBoneIK_WorkData WorkData; // 0x110
    char pad_1c8[0x8];
}; // Size: 0x1d0
#pragma pack(pop)
