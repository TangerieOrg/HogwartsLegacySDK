#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FClothConstraintSetupNv {
    float Stiffness; // 0x0
    float StiffnessMultiplier; // 0x4
    float StretchLimit; // 0x8
    float CompressionLimit; // 0xc
}; // Size: 0x10
#pragma pack(pop)
