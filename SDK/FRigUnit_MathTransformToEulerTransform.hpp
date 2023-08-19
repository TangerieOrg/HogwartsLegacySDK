#pragma once
#include <cstdint>
#include "FEulerTransform.hpp"
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    FEulerTransform Result; // 0x40
    char pad_64[0xc];
}; // Size: 0x70
#pragma pack(pop)
