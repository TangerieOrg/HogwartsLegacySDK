#pragma once
#include <cstdint>
#include "FRigUnit_CCDIK_RotationLimit.hpp"
#include "FRigUnit_CCDIK_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EffectorBone; // 0x70
    char pad_78[0x8];
    FTransform EffectorTransform; // 0x80
    float Precision; // 0xb0
    float weight; // 0xb4
    int32_t MaxIterations; // 0xb8
    bool bStartFromTail; // 0xbc
    char pad_bd[0x3];
    float BaseRotationLimit; // 0xc0
    char pad_c4[0x4];
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xc8
    bool bPropagateToChildren; // 0xd8
    char pad_d9[0x7];
    FRigUnit_CCDIK_WorkData WorkData; // 0xe0
    char pad_138[0x8];
}; // Size: 0x140
#pragma pack(pop)
