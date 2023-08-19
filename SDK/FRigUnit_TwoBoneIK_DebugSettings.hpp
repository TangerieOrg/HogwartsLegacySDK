#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIK_DebugSettings {
    bool bEnabled; // 0x0
    bool bDrawAxes; // 0x1
    bool bDrawOriginalBoneChain; // 0x2
    bool bDrawPoleVectorCalculation; // 0x3
    float Scale; // 0x4
    char pad_8[0x8];
    FTransform WorldOffset; // 0x10
}; // Size: 0x40
#pragma pack(pop)
