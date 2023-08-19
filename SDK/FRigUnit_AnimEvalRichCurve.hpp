#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase {
    float Value; // 0x8
    char pad_c[0x4];
    FRuntimeFloatCurve Curve; // 0x10
    float SourceMinimum; // 0x98
    float SourceMaximum; // 0x9c
    float TargetMinimum; // 0xa0
    float TargetMaximum; // 0xa4
    float Result; // 0xa8
    char pad_ac[0x4];
}; // Size: 0xb0
#pragma pack(pop)
