#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_MathColorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase {
    float Value; // 0x8
    FLinearColor Result; // 0xc
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
