#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FLookLimits.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_IncrementalRotation_DebugSettings.hpp"
#include "FRigUnit_IncrementalRotation_WorkData.hpp"
#include "FRigUnit_WB_AimBone_Target.hpp"
#pragma pack(push, 1)
struct FRigUnit_IncrementalRotation : public FRigUnitMutable {
    FName LeafBone; // 0x68
    FName TrunkBone; // 0x70
    FRigUnit_WB_AimBone_Target Primary; // 0x78
    FRigUnit_WB_AimBone_Target Secondary; // 0xa0
    TArray<FLookLimits> LookLimits; // 0xc8
    float Blending; // 0xd8
    EControlRigAnimEasingType RotationEaseType; // 0xdc
    bool bPropagateToChildren; // 0xdd
    char pad_de[0x2];
    FRigUnit_IncrementalRotation_DebugSettings DebugSettings; // 0xe0
    FRigUnit_IncrementalRotation_WorkData WorkData; // 0x120
    char pad_188[0x8];
}; // Size: 0x190
#pragma pack(pop)
