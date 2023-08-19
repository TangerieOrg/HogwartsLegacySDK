#pragma once
#include <cstdint>
#include "FRigUnit_HighlevelBase.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase {
    char pad_8[0x8];
    FTransform Root; // 0x10
    FVector PoleVector; // 0x40
    char pad_4c[0x4];
    FTransform Effector; // 0x50
    FVector PrimaryAxis; // 0x80
    FVector SecondaryAxis; // 0x8c
    float SecondaryAxisWeight; // 0x98
    bool bEnableStretch; // 0x9c
    char pad_9d[0x3];
    float StretchStartRatio; // 0xa0
    float StretchMaximumRatio; // 0xa4
    float BoneALength; // 0xa8
    float BoneBLength; // 0xac
    FTransform Elbow; // 0xb0
}; // Size: 0xe0
#pragma pack(pop)
