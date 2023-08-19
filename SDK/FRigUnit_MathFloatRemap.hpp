#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    float SourceMinimum; // 0xc
    float SourceMaximum; // 0x10
    float TargetMinimum; // 0x14
    float TargetMaximum; // 0x18
    bool bClamp; // 0x1c
    char pad_1d[0x3];
    float Result; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
