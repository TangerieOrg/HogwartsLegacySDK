#pragma once
#include <cstdint>
#include "FConstraintInstanceBase.hpp"
#include "FConstraintProfileProperties.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FConstraintInstance : public FConstraintInstanceBase {
    FName JointName; // 0x18
    FName ConstraintBone1; // 0x20
    FName ConstraintBone2; // 0x28
    FVector Pos1; // 0x30
    FVector PriAxis1; // 0x3c
    FVector SecAxis1; // 0x48
    FVector Pos2; // 0x54
    FVector PriAxis2; // 0x60
    FVector SecAxis2; // 0x6c
    FRotator AngularRotationOffset; // 0x78
    uint8_t bScaleLinearLimits : 1; // 0x84
    uint8_t pad_bitfield_84_1 : 7;
    char pad_85[0x7];
    FConstraintProfileProperties ProfileInstance; // 0x8c
    char pad_1a4[0x2c];
}; // Size: 0x1d0
#pragma pack(pop)
