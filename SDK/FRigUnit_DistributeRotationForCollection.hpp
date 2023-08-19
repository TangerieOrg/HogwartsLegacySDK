#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_DistributeRotation_Rotation.hpp"
#include "FRigUnit_DistributeRotation_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable {
    FRigElementKeyCollection Items; // 0x68
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
    EControlRigAnimEasingType RotationEaseType; // 0x88
    char pad_89[0x3];
    float weight; // 0x8c
    FRigUnit_DistributeRotation_WorkData WorkData; // 0x90
}; // Size: 0xe0
#pragma pack(pop)
