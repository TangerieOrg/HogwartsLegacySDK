#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_FABRIK_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKeyCollection Items; // 0x68
    char pad_78[0x8];
    FTransform EffectorTransform; // 0x80
    float Precision; // 0xb0
    float weight; // 0xb4
    bool bPropagateToChildren; // 0xb8
    char pad_b9[0x3];
    int32_t MaxIterations; // 0xbc
    FRigUnit_FABRIK_WorkData WorkData; // 0xc0
    char pad_f8[0x8];
}; // Size: 0x100
#pragma pack(pop)
