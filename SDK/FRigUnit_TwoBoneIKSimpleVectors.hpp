#pragma once
#include <cstdint>
#include "FRigUnit_HighlevelBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase {
    FVector Root; // 0x8
    FVector PoleVector; // 0x14
    FVector Effector; // 0x20
    bool bEnableStretch; // 0x2c
    char pad_2d[0x3];
    float StretchStartRatio; // 0x30
    float StretchMaximumRatio; // 0x34
    float BoneALength; // 0x38
    float BoneBLength; // 0x3c
    FVector Elbow; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
