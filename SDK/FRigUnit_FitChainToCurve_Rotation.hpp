#pragma once
#include <cstdint>
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FRigUnit_FitChainToCurve_Rotation {
    FQuat Rotation; // 0x0
    float Ratio; // 0x10
    char pad_14[0xc];
}; // Size: 0x20
#pragma pack(pop)
