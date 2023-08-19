#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FHairStretchConstraint {
    bool SolveStretch; // 0x0
    bool ProjectStretch; // 0x1
    char pad_2[0x2];
    float StretchDamping; // 0x4
    float StretchStiffness; // 0x8
    char pad_c[0x4];
    FRuntimeFloatCurve StretchScale; // 0x10
}; // Size: 0x98
#pragma pack(pop)
