#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    FTransform Result; // 0x40
}; // Size: 0x70
#pragma pack(pop)
