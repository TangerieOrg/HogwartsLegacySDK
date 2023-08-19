#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit_AimBone_DebugSettings.hpp"
#include "FRigUnit_AimBone_Target.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable {
    FName Bone; // 0x68
    FRigUnit_AimBone_Target Primary; // 0x70
    FRigUnit_AimBone_Target Secondary; // 0x98
    float weight; // 0xc0
    bool bPropagateToChildren; // 0xc4
    char pad_c5[0xb];
    FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
    FCachedRigElement CachedBoneIndex; // 0x110
    FCachedRigElement PrimaryCachedSpace; // 0x124
    FCachedRigElement SecondaryCachedSpace; // 0x138
    char pad_14c[0x4];
}; // Size: 0x150
#pragma pack(pop)
