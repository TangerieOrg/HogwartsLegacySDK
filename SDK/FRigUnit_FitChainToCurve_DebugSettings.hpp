#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_FitChainToCurve_DebugSettings {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    float Scale; // 0x4
    FLinearColor CurveColor; // 0x8
    FLinearColor SegmentsColor; // 0x18
    char pad_28[0x8];
    FTransform WorldOffset; // 0x30
}; // Size: 0x60
#pragma pack(pop)
