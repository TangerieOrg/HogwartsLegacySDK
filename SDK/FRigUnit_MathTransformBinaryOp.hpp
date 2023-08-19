#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform A; // 0x10
    FTransform B; // 0x40
    FTransform Result; // 0x70
}; // Size: 0xa0
#pragma pack(pop)
