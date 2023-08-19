#pragma once
#include <cstdint>
#include "EAimMode.hpp"
#include "FAimTarget.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_AimConstraint_WorkData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_AimConstraint : public FRigUnitMutable {
    FName Joint; // 0x68
    EAimMode AimMode; // 0x70
    EAimMode UpMode; // 0x71
    char pad_72[0x2];
    FVector AimVector; // 0x74
    FVector UpVector; // 0x80
    char pad_8c[0x4];
    TArray<FAimTarget> AimTargets; // 0x90
    TArray<FAimTarget> UpTargets; // 0xa0
    FRigUnit_AimConstraint_WorkData WorkData; // 0xb0
}; // Size: 0xc0
#pragma pack(pop)
