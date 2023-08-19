#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_TwistBones_WorkData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    FVector TwistAxis; // 0x78
    FVector PoleAxis; // 0x84
    EControlRigAnimEasingType TwistEaseType; // 0x90
    char pad_91[0x3];
    float weight; // 0x94
    bool bPropagateToChildren; // 0x98
    char pad_99[0x7];
    FRigUnit_TwistBones_WorkData WorkData; // 0xa0
}; // Size: 0xd0
#pragma pack(pop)
