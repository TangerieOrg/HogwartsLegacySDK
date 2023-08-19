#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FHairBendConstraint {
    bool SolveBend; // 0x0
    bool ProjectBend; // 0x1
    char pad_2[0x2];
    float BendDamping; // 0x4
    float BendStiffness; // 0x8
    char pad_c[0x4];
    FRuntimeFloatCurve BendScale; // 0x10
}; // Size: 0x98
#pragma pack(pop)
