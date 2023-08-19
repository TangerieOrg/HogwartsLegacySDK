#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase {
    bool Condition; // 0x8
    char pad_9[0x7];
    FTransform IfTrue; // 0x10
    FTransform IfFalse; // 0x40
    FTransform Result; // 0x70
}; // Size: 0xa0
#pragma pack(pop)
