#pragma once
#include <cstdint>
#include "EPostProcessingVarScalar.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FPostProcessingVarScalarCurve {
    char pad_0[0x8];
    EPostProcessingVarScalar Var; // 0x8
    char pad_9[0x7];
    FRuntimeFloatCurve Curve; // 0x10
}; // Size: 0x98
#pragma pack(pop)
