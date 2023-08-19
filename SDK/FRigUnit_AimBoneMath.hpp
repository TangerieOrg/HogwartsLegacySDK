#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit_AimBone_DebugSettings.hpp"
#include "FRigUnit_AimItem_Target.hpp"
#include "FRigUnit_HighlevelBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase {
    char pad_8[0x8];
    FTransform InputTransform; // 0x10
    FRigUnit_AimItem_Target Primary; // 0x40
    FRigUnit_AimItem_Target Secondary; // 0x6c
    float weight; // 0x98
    char pad_9c[0x4];
    FTransform Result; // 0xa0
    FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
    FCachedRigElement PrimaryCachedSpace; // 0x110
    FCachedRigElement SecondaryCachedSpace; // 0x124
    char pad_138[0x8];
}; // Size: 0x140
#pragma pack(pop)
