#pragma once
#include <cstdint>
#include "EOrientationTargetKind.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_WB_AimBone_Target {
    float weight; // 0x0
    FVector Axis; // 0x4
    FVector Target; // 0x10
    EOrientationTargetKind Kind; // 0x1c
    char pad_1d[0x3];
    FName Space; // 0x20
}; // Size: 0x28
#pragma pack(pop)
