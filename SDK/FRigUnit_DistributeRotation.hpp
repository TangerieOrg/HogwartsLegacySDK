#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FRigUnit_DistributeRotation_Rotation.hpp"
#include "FRigUnit_DistributeRotation_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
    EControlRigAnimEasingType RotationEaseType; // 0x88
    char pad_89[0x3];
    float weight; // 0x8c
    bool bPropagateToChildren; // 0x90
    char pad_91[0x7];
    FRigUnit_DistributeRotation_WorkData WorkData; // 0x98
}; // Size: 0xe8
#pragma pack(pop)
