#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase {
    float Value; // 0x8
    EControlRigAnimEasingType Type; // 0xc
    char pad_d[0x3];
    float SourceMinimum; // 0x10
    float SourceMaximum; // 0x14
    float TargetMinimum; // 0x18
    float TargetMaximum; // 0x1c
    float Result; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
