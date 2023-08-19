#pragma once
#include <cstdint>
#include "EPostProcessingVarColor.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#pragma pack(push, 1)
struct FPostProcessingVarColorCurve {
    char pad_0[0x8];
    EPostProcessingVarColor Var; // 0x8
    char pad_9[0x7];
    FRuntimeCurveLinearColor Curve; // 0x10
}; // Size: 0x218
#pragma pack(pop)
