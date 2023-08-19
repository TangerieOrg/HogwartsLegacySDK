#pragma once
#include <cstdint>
#include "FControlRigConeConstraint.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_ConstrainRotation_DebugSettings.hpp"
#include "FRigUnit_ConstrainRotation_WorkData.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_ConstrainRotation : public FRigUnitMutable {
    FName Bone; // 0x68
    FRotator LocalRotation; // 0x70
    float weight; // 0x7c
    FControlRigConeConstraint ConeConstraint; // 0x80
    char pad_98[0x8];
    FRigUnit_ConstrainRotation_DebugSettings DebugSettings; // 0xa0
    FRigUnit_ConstrainRotation_WorkData WorkData; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
