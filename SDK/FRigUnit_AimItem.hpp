#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_AimBone_DebugSettings.hpp"
#include "FRigUnit_AimItem_Target.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKey Item; // 0x68
    FRigUnit_AimItem_Target Primary; // 0x74
    FRigUnit_AimItem_Target Secondary; // 0xa0
    float weight; // 0xcc
    FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
    FCachedRigElement CachedItem; // 0x110
    FCachedRigElement PrimaryCachedSpace; // 0x124
    FCachedRigElement SecondaryCachedSpace; // 0x138
    char pad_14c[0x4];
}; // Size: 0x150
#pragma pack(pop)
