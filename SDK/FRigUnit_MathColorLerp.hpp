#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_MathColorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase {
    FLinearColor A; // 0x8
    FLinearColor B; // 0x18
    float T; // 0x28
    FLinearColor Result; // 0x2c
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
