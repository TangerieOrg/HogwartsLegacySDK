#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase {
    float A; // 0x8
    float B; // 0xc
    float C; // 0x10
    float AlphaAngle; // 0x14
    float BetaAngle; // 0x18
    float GammaAngle; // 0x1c
    bool bValid; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
